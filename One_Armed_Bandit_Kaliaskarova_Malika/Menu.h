#pragma once
#include "Header.h"
#include "Coord.h"
using namespace std;

class Menu {
	int Select;
	string* menu;
	Coord Pos;
public:
	Menu() : Select(0), menu(new string[2]{" S T A R T ", " E X I T " }), Pos(Coord(45,25)) {}
	~Menu() { delete[] menu; }

	int StartMenu() {
		SetPos(Pos.y, Pos.x);
		SetColor(COLOR::red, COLOR::bright_white);

		while (true) {
			for (int i = 0; i < 2; i++) {
				if (i == Select) {
					SetColor(COLOR::red, COLOR::bright_white);
					SetPos(Pos.y, Pos.x + (i * 20));
				} else {
					SetColor(COLOR::black, COLOR::gray);
					SetPos(Pos.y, Pos.x + (i * 20));
				}
				cout << menu[i];
			}
			SetColor(COLOR::black,COLOR::white);
			{
				int key = _getch();
				switch (key) {
				case 75:
					if (Select == 0) {
						Select = 1;
					} else {
						Select = 0;
					}
					break;
				case 77:
					if (Select == 0) {
						Select = 1;
					} else {
						Select = 0;
					}
					break;
				case 13:
					return Select;
				}
			}
		}
	}
};
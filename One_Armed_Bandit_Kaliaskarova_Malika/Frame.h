#pragma once
#include <iostream>
#include <vector>
#include "Coord.h"
#include "Header.h"
using namespace std;

class Frame {
	string* Picture;
	int RowPic;
	int ColPic;
	Coord Pos;
public:
	Frame(): Picture(), RowPic(), ColPic(), Pos() {}
	Frame(string* Picture, Coord Pos, int Row): Picture(Picture), RowPic(Row), ColPic(Picture[0].size()), Pos(Pos) {}

	void SetFrame(string* picture, Coord pos, int row) {
		Picture = picture;
		Pos = pos;
		RowPic = row;
		ColPic = Picture[0].size();
	}

	void Draw() {
		for (int i = 0; i < RowPic; i++) {  //прорисовка поля игрока
			for (int j = 0; j < ColPic; j++) {
				SetPos(Pos.y + i, Pos.x + j);
				if (Picture[i][j] == '2') { SetColor(COLOR::black, COLOR::purple);		cout << char(205); continue; }
				if (Picture[i][j] == '3') { SetColor(COLOR::black, COLOR::purple);		cout << char(186); continue; }
				if (Picture[i][j] == '1') { SetColor(COLOR::black, COLOR::purple);		cout << char(206); continue; }
				if (Picture[i][j] == '-') { SetColor(COLOR::black, COLOR::yellow);		cout << Picture[i][j]; continue; }
	      if (Picture[i][j] == '|') { SetColor(COLOR::black, COLOR::yellow);		cout << Picture[i][j]; continue; }
	      if (Picture[i][j] == '+') { SetColor(COLOR::black, COLOR::yellow);		cout << Picture[i][j]; continue; }
	      if (Picture[i][j] == 'p') { SetColor(COLOR::light_blue, COLOR::blue);	cout << char(219); continue; }
	      if (Picture[i][j] == '*') {	SetColor(COLOR::black, COLOR::green);     cout << Picture[i][j]; continue; }
				if (Picture[i][j] == '@') { SetColor(COLOR::black, COLOR::purple);    cout << Picture[i][j]; continue; }
				if (Picture[i][j] == '0') { SetColor(COLOR::black, COLOR::red);    	  cout << Picture[i][j]; continue; }
				if (Picture[i][j] == '#') { SetColor(COLOR::black, COLOR::light_aqua);cout << Picture[i][j]; continue; }
				if (Picture[i][j] == '7') { SetColor(COLOR::black, COLOR::yellow);    cout << Picture[i][j]; continue; }
	      SetColor(COLOR::black, COLOR::white);	cout << Picture[i][j];
			}
		}
	}
};
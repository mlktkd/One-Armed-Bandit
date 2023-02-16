#pragma once
#include "Menu.h"
#include "Header.h"
#include "Frame.h"
#include <vector>

string mainPic[]{
	"1222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222221",
	"3   |                                                                                        |  3",
	"3  -+-  ppppppppppppppppppppp         ppppppppppppppppppppp         ppppppppppppppppppppp   -+- 3",
	"3   |   p         *         p         p         *         p    |    p         *         p    |  3",
	"3       p        ***        p         p        ***        p   -+-   p        ***        p       3",
	"3       p     **  *  **     p    |    p     **  *  **     p    |    p     **  *  **     p       3",
	"3       p    *    *    *    p   -+-   p    *    *    *    p         p    *    *    *    p       3",
	"3       p    *    *         p    |    p    *    *         p         p    *    *         p   |   3",
	"3       p     **  *         p         p     **  *         p         p     **  *         p  -+-  3",
	"3       p        ***        p         p        ***        p     |   p        ***        p   |   3",
	"3    |  p         *  **     p         p         *  **     p    -+-  p         *  **     p       3",
	"3   -+- p         *    *    p         p         *    *    p     |   p         *    *    p       3",
	"3    |  p    *    *    *    p         p    *    *    *    p         p    *    *    *    p       3",
	"3       p     **  *  **     p    |    p     **  *  **     p         p     **  *  **     p    |  3",
	"3       p        ***        p   -+-   p        ***        p         p        ***        p   -+- 3",
	"3 |     p         *         p    |    p         *         p    |    p         *         p    |  3",
	"3-+-    ppppppppppppppppppppp         ppppppppppppppppppppp   -+-   ppppppppppppppppppppp       3",
	"3 |                                                            |                                3",
	"1222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222221"
};
int RowPic = sizeof(mainPic) / sizeof(mainPic[0]);
string Pic[6][13]{
	{
	"         *        ",
	"        ***       ",
	"     **  *  **    ",
	"    *    *    *   ",
	"    *    *        ",
	"     **  *        ",
	"        ***       ",
	"         *  **    ",
	"         *    *   ",
	"    *    *    *   ",
	"     **  *  **    ",
	"        ***       ",
	"         *        "
	},
	{
	"            @     ",
	"           @      ",
	"          @       ",
	"         @ @      ",
	"        @  @      ",
	"       @    @     ",
	"      @     @@@   ",
	"    @@@   @     @ ",
	"  @     @@       @",
	" @       @       @",
	" @       @@     @ ",
	"  @     @   @@@   ",
	"    @@@           "
	},
	{
	"                  ",
	"           0      ",
	"          0       ",
	"  0000   0  000   ",
	" 0     0000     0 ",
	"0                0",
	"0                0",
	"0                0",
	"0                0",
	" 00            00 ",
	"    0000000000    ",
	"                  ",
	"                  "
	},
	{
	"                  ",
	"     #########    ",
	"   #   #   #   #  ",
	" #################",
	"  #    #   #    # ",
	"   #    # #    #  ",
	"    #   # #   #   ",
	"     #   #   #    ",
	"      #  #  #     ",
	"       # # #      ",
	"        ###       ",
	"         #        ",
	"                  "
	},
	{
	"                  ",
	"  777777777777777 ",
	"  77          77  ",
	"  77         77   ",
	"            77    ",
	"           77     ",
	"          77      ",
	"         77       ",
	"        77        ",
	"       77         ",
	"      77          ",
	"     77           ",
	"                  "
	},
	{
	"            @     ",
	"           @      ",
	"          @       ",
	"         @ @      ",
	"        @  @      ",
	"       @    @     ",
	"      @     @@@   ",
	"    @@@   @     @ ",
	"  @     @@       @",
	" @       @       @",
	" @       @@     @ ",
	"  @     @   @@@   ",
	"    @@@           "
	}
};

class Game {
	Menu menu;
	Frame mainFrame;
	Frame* Cards1;
	Frame* Cards2;
	Frame* Cards3;
	int Res;
public:
	Game() : menu(), mainFrame(mainPic, Coord(10, 3), RowPic), Cards1(new Frame[6]), Cards2(new Frame[6]), Cards3(new Frame[6]), Res() {
		Cards1[0].SetFrame(Pic[0], Coord(19, 6), 13);
		Cards1[1].SetFrame(Pic[1], Coord(19, 6), 13);
		Cards1[2].SetFrame(Pic[2], Coord(19, 6), 13);
		Cards1[3].SetFrame(Pic[3], Coord(19, 6), 13);
		Cards1[4].SetFrame(Pic[4], Coord(19, 6), 13);
		Cards1[5].SetFrame(Pic[5], Coord(19, 6), 13);

		Cards2[0].SetFrame(Pic[0], Coord(49, 6), 13);
		Cards2[1].SetFrame(Pic[1], Coord(49, 6), 13);
		Cards2[2].SetFrame(Pic[2], Coord(49, 6), 13);
		Cards2[3].SetFrame(Pic[3], Coord(49, 6), 13);
		Cards2[4].SetFrame(Pic[4], Coord(49, 6), 13);
		Cards2[5].SetFrame(Pic[5], Coord(49, 6), 13);

		Cards3[0].SetFrame(Pic[0], Coord(79, 6), 13);
		Cards3[1].SetFrame(Pic[1], Coord(79, 6), 13);
		Cards3[2].SetFrame(Pic[2], Coord(79, 6), 13);
		Cards3[3].SetFrame(Pic[3], Coord(79, 6), 13);
		Cards3[4].SetFrame(Pic[4], Coord(79, 6), 13);
		Cards3[5].SetFrame(Pic[5], Coord(79, 6), 13);
	}
	~Game() { delete[] Cards3; delete[] Cards2; delete[] Cards1; }

	void Start() {
		while (true) {
			mainFrame.Draw();
			switch (menu.StartMenu()) {
			case 0:
				StartGame();  //начало игры
				CLS;
				break;
			case 1:
			case -1:  //выход из игры
				CLS;
				exit(0);
			}
		}
	}

	int MaxSearch(int val1, int val2, int val3) {
		if (val1 >= val2 && val1 >= val3) { return val1; }
		else if (val2 >= val1 && val2 >= val3) { return val2; }
		else { return val3; }
	}

	void StartGame() {
		int rand1, rand2, rand3;
		rand1 = RAND(5, 25);
		rand2 = RAND(5, 25);
		rand3 = RAND(5, 25);
		int max = MaxSearch(rand1, rand2, rand3);
		int res1 = -1;
		int res2 = -1;
		int res3 = -1;
		for (int i = 0, r1 = 0, r2 = 0, r3 = 0; i < max; ++i) {
			if (i < rand1) {
				Cards1[r1].Draw();
				if (r1 < 5) { r1++; } else { r1 = 0; }
			}
			if (i < rand2) {
				Cards2[r2].Draw();
				if (r2 < 5) { r2++; } else { r2 = 0; }
			}
			if (i < rand3) {
				Cards3[r3].Draw();
				if (r3 < 5) { r3++; } else { r3 = 0; }
			}

			if (i == rand1 - 1) { res1 = r1; }
			if (i == rand2 - 1) { res2 = r2; }
			if (i == rand3 - 1) { res3 = r3; }
			Sleep(200);
		}
		Results(res1, res2, res3);
		PrintResults();
		SetColor(COLOR::black, COLOR::white);
		cin.get();
	}

	void Results(int res1, int res2, int res3) {
		if (res1 == 0 && res2 == 0 && res3 == 0) { Res = 100; }
		else if ((res1 == 1 || res1 == 5) && (res2 == 1 || res2 == 5) && (res3 == 1 || res3 == 5)) { Res = 0; }
		else if (res1 == 2 && res2 == 2 && res3 == 2) { Res = 5; }
		else if (res1 == 3 && res2 == 3 && res3 == 3) { Res = 10; }
		else if (res1 == 4 && res2 == 4 && res3 == 4) { Res = 300; }
		else { Res = -1; }
	}

	void PrintResults() {
		SetPos(25, 25);
		SetColor(COLOR::red, COLOR::bright_white);
		if (Res == 0) {
			SetColor(COLOR::light_green, COLOR::green);
			cout << "   Y  O  U     S  A  V  E  D     Y  O  U  R     M  O  N  E  Y!    ";
			return;
		}
		if (Res == 5) {
			SetColor(COLOR::light_green, COLOR::green);
			cout << "       Y  O  U     W  O  N     5     D  O  L  L  A  R  S  !       ";
			return;
		}
		if (Res == 10) {
			SetColor(COLOR::light_green, COLOR::green);
			cout << "       Y  O  U     W  O  N     10     D  O  L  L  A  R  S !       ";
			return;
		}
		if (Res == 100) {
			SetColor(COLOR::light_green, COLOR::green);
			cout << "       Y  O  U     W  O  N     100     D  O  L  L  A  R  S !      ";
			return;
		}
		if (Res == 300) {
			SetColor(COLOR::light_green, COLOR::green);
			cout << "   J A C K P O T !   300   D O L L A R S   I S   Y O U R S !      ";
			return;
		}
		cout << "     Y  O  U     L  O  S  T     Y  O  U  R     M  O  N  E  Y!     ";
	}
};
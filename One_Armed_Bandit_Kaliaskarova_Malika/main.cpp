#include <iostream>
#include "Header.h"
#include "Game.h"
using namespace std;

int main() {
	CursorHide();
	srand(0);
	Game game;
	game.Start();
}
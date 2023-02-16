#pragma once
using namespace std;

struct Coord {
  int x, y;
  Coord() :x(), y() {}
  Coord(int x, int y) : x(x), y(y) {}
  bool operator == (const Coord& obj) {
    return x == obj.x && y == obj.y;
  }
  void SetCoord(const Coord obj) { x = obj.x, y = obj.y; }
};
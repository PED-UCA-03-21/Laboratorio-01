#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//ESTRUCTURAS

struct Point {
  int x, y;
};

struct Rect {
  Point p1, p2;
};

//FUNCIONES

int pointDiff(int v1, int v2) {
  return abs(v1 - v2);
}

bool isBetween(int x, int p1, int p2) {
  int a = p1, b = p2;

  if(p1 > p2) {
    a = p2; b = p1;
  }

  return ((x >= a) && (x <= b));
}

float rectPerimeter(Rect rect) {
  int xSide = pointDiff(rect.p1.x, rect.p2.x);
  int ySide = pointDiff(rect.p1.y, rect.p2.y);

  return (2 * xSide) + (2 * ySide);
}

float rectArea(Rect rect) {
  int xSide = pointDiff(rect.p1.x, rect.p2.x);
  int ySide = pointDiff(rect.p1.y, rect.p2.y);

  return xSide * ySide;
}

bool isPointInsideOfRect(Point p, Rect r) {
  bool xIsInside = isBetween(p.x, r.p1.x, r.p2.x);
  bool yIsInside = isBetween(p.y, r.p1.y, r.p2.y);

  return xIsInside && yIsInside;
}

bool isRectInsideOfRect(Rect r, Rect container) {
  bool p1IsInside = isPointInsideOfRect(r.p1, container);
  bool p2IsInside = isPointInsideOfRect(r.p2, container);

  return p1IsInside && p2IsInside;
}

//MAIN

int main() {

  Rect rect1, rect2;
  Point p1, p2;
  float rect1P, rect1A;

  //Primer rectangulo, coordenadas
  rect1.p1.x = 1;
  rect1.p1.y = 1;
  rect1.p2.x = 10;
  rect1.p2.y = 10;

  rect1P = rectPerimeter(rect1);
  rect1A = rectArea(rect1);

  cout << "RECTANGULO 1 -> p1: " << rect1.p1.x << ", " << rect1.p1.y 
    << " p2: " << rect1.p2.x << " ," << rect1.p2.y << endl << endl;

  cout << "PERIMETRO: " << rect1P << endl << "AREA: " << rect1A << endl << endl;

  //Puntos a evaluar
  p1.x = 5, p1.y = 4;
  p2.x = 15, p2.y = 1;

  cout << "PUNTO 1 -> " << p1.x << " ," << p1.y << endl;
  string resultP1 = isPointInsideOfRect(p1, rect1) ? "ESTA DENTRO" : "ESTA AFUERA";
  cout << resultP1 << " DEL RECTANGULO 1" << endl << endl;

  cout << "PUNTO 2 -> " << p2.x << " ," << p2.y << endl;
  string resultP2 = isPointInsideOfRect(p2, rect1) ? "ESTA DENTRO" : "ESTA AFUERA";
  cout << resultP2 << " DEL RECTANGULO 1" << endl << endl;

  //Rectangulo a evaluar
  rect2.p1.x = 3;
  rect2.p1.y = 3;
  rect2.p2.x = 4;
  rect2.p2.y = 10;

  cout << "RECTANGULO 2 -> p1: " << rect2.p1.x << ", " << rect2.p1.y 
    << " p2: " << rect2.p2.x << " ," << rect2.p2.y << endl << endl;
  string resultRect2 = isRectInsideOfRect(rect2, rect1) ? "ESTA CONTENIDO" : "NO ESTA CONTENIDO";
  cout << resultRect2 << " EN EL RECTANGULO 1" << endl;

  return 0;
}
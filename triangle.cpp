#include "triangle.h"
Triangle::Triangle(const Coordinate c1, const Coordinate c2, const Coordinate c3)
{
  shapeType = name;

  cords[0] = c1;
  cords[1] = c2;
  cords[2] = c3;
}

double Triangle ::Area()
{
  bool intersect = false;

  double aX = cords[0].GetX();
  double aY = cords[0].GetY();
  double bX = cords[1].GetX();
  double bY = cords[1].GetY();
  double cX = cords[2].GetX();
  double cY = cords[2].GetY();

  if ((aX == bX && aX == cX) || (aY == bY && aY == cY))
  {
    intersect = true;
  }
  if (intersect == true)
  {
    return -1;
  }
  else
  {
    /*
    Triangle Coordinate geometry formula
    | ((Ax(By-Cy) + bX(Cy-Ay) + Cx(Ay- By)) / 2) |
    */
    double area = fabs((aX * (bY - cY) + bX * (cY - aY) + cX * (aY - bY)) / 2);
    return area;
  }
}

double Triangle ::Circumference()
{
  double aX = cords[0].GetX();
  double aY = cords[0].GetY();
  double bX = cords[1].GetX();
  double bY = cords[1].GetY();
  double cX = cords[2].GetX();
  double cY = cords[2].GetY();

  double sideA = sqrt((pow((aX - bX), 2)) + (pow((aY - bY), 2)));
  double sideB = sqrt((pow((bX - cX), 2)) + (pow((bY - cY), 2)));
  double sideC = sqrt((pow((cX - aX), 2)) + (pow((cY - aY), 2)));

  double circ = (sideA + sideB + sideC);
  return circ;
}

Coordinate Triangle ::Position()
{
  Coordinate centerCord;
  double aX = cords[0].GetX();
  double aY = cords[0].GetY();
  double bX = cords[1].GetX();
  double bY = cords[1].GetY();
  double cX = cords[2].GetX();
  double cY = cords[2].GetY();

  /*
  Centroid formula
  X = ((Ax + Bx + Cx ) / 3 )
  Y = ((Ay + By + Cy ) / 3 )
  */

  double centerX = (aX + bX + cX) / 3;
  double centerY = (aY + bY + cY) / 3;
  centerCord.SetX(centerX);
  centerCord.SetY(centerY);

  return centerCord;
}

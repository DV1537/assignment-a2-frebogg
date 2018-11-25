#ifndef POINT_H
#define POINT_H
#include "shape.h"

class Point : public Shape
{
private:
  Coordinate cords[1];
  const std::string name = "Point";

public:
  Point(const Coordinate c1);
  double Area() override;
  double Circumference() override;
  Coordinate Position() override;
  bool IsConvex() override;
};
#endif
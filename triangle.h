#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle : public Shape
{
private:
  Coordinate cords[3];
  const std::string name = "Triangle";
  const int amountOfCoordinates = 3;

public:
  Triangle(const Coordinate sentCords[]);
  double Area() override;
  double Circumference() override;
  Coordinate Position() override;
  bool IsConvex() override;
};

#endif
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle : public Shape
{
private:
  Coordinate cords[3];
  const std::string name = "Triangle";

public:
  Triangle(const Coordinate c1, const Coordinate c2, const Coordinate c3);
  double Area() override;
  double Circumference() override;
  Coordinate Position() override;
};

#endif
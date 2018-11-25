#ifndef LINE_H
#define LINE_H
#include "shape.h"

class Line : public Shape
{
private:
  Coordinate cords[2];
  const std::string name = "Line";
  const int amountOfCoordinates = 2;

public:
  Line(const Coordinate sentCords[]);
  double Area() override;
  double Circumference() override;
  Coordinate Position() override;
  bool IsConvex() override;
};
#endif
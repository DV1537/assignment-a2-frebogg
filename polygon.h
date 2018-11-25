#ifndef POLYGON_H
#define POLYGON_H
#include "shape.h"

class Polygon : public Shape
{
private:
  Coordinate *cords;
  const std::string name = "Polygon";
  int amountOfCoordinates;

public:
  ~Polygon();
  Polygon(const Coordinate sentCords[], const int amountOfCoordinates);
  double Area() override;
  double Circumference() override;
  Coordinate Position() override;
  bool IsConvex() override;
};
#endif
#ifndef LINE_H
#define LINE_H
#include "shape.h"

class Line : public Shape
{
  private:
    Coordinate cords[2];
    const std::string name = "Line";

  public:
    Line(const Coordinate c1, const Coordinate c2);
    double Area() override;
    double Circumference() override;
    Coordinate Position() override;
    bool IsConvex();
};
#endif
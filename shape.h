#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
#include <cmath>
#include "coordinate.h"

//using namespace std; // Temp
class Shape
{
protected:
  std::string shapeType = "";

public:
  std::string GetType() const;
  virtual double Area() = 0;
  virtual double Circumference() = 0;
  virtual Coordinate Position() = 0;
  bool IsConvex();
  double Distance(Shape &s);
};

#endif
#include "shape.h"

std::string Shape::GetType() const
{
  return shapeType;
}

bool Shape::IsConvex()
{
  return true;
}

double Shape::Distance(Shape &s)
{
  Coordinate firstCord = this->Position();
  Coordinate secondCord = s.Position();

  double distance = sqrt((pow((firstCord.GetX() - secondCord.GetX()), 2)) +
                         (pow((firstCord.GetY() - secondCord.GetY()), 2)));
  return distance;
}

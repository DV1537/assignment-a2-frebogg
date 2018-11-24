#include "point.h"

Point::Point(const Coordinate c1)
{
    shapeType = name;
    cords[0] = c1;
}

double Point::Area()
{
    return -1;
}
double Point::Circumference()
{
    return 0;
}

Coordinate Point::Position()
{
    return cords[0];
}

bool Point::IsConvex()
{
    return false;
}
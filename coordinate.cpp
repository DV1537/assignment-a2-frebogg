#include "coordinate.h"
Coordinate::Coordinate()
{
}
Coordinate ::Coordinate(double xCord, double yCord)
{
    x = xCord;
    y = yCord;
}
double Coordinate::GetY()
{
    return y;
}

double Coordinate ::GetX()
{
    return x;
}
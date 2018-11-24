#include "coordinate.h"
Coordinate::Coordinate()
{
}
Coordinate ::Coordinate(double xCord, double yCord)
{
    x = xCord;
    y = yCord;
}

void Coordinate::SetX(double xCord)
{
    x = xCord;
}

void Coordinate::SetY(double yCord)
{
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
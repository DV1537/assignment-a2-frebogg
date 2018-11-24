#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate
{
  private:
    double x;
    double y;

  public:
    Coordinate();
    Coordinate(double xCord, double yCord);
    double GetX();
    double GetY();
    void SetX(double xCord);
    void SetY(double yCord);
};

#endif

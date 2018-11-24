#ifndef POLYGON_H
#define POLYGON_H
#include "shape.h"

class Polygon : public Shape
{
  private:
    // Fixa så denna är dynamisk antar jag ? beroende på vad en poly är.
    Coordinate *cords;
    const std::string name = "Polygon";

  public:
    ~Polygon();
    Polygon(const Coordinate sentCords[], const int amountOfCoordinates);
    double Area() override;
    double Circumference() override;
    Coordinate Position() override;
    bool IsConvex();
};
#endif
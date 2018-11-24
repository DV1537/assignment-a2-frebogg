#include <fstream>
#include "point.h"
#include "line.h"
#include "triangle.h"
#include "polygon.h"
//using namespace std; // Ska tas bort ?

int main(int argc, const char *argv[])
{
    if (argc > 1)
    {
        std::ifstream myReadFile;
        myReadFile.open(argv[1]);

        if (myReadFile)
        {
            // Efter 2 mellanrum så börjar nästa coord
            // Se till så att en koordinate måste ha 2 siffror
            int counter = 0;
            int amountOfCords = 0;
            double number = 0.0;
            double cordX = 0.0;
            double cordY = 0.0;
            int arraySize = 0;
            Coordinate *cordArr = new Coordinate[arraySize];

            while (myReadFile >> number)
            {
                counter++;
                if ((counter % 2) == 0)
                {
                    cordY = number;
                    Coordinate newCord(cordX, cordY);
                    arraySize++;
                    Coordinate *tempArray = new Coordinate[arraySize];

                    for (int i = 0; i < (arraySize - 1); i++)
                    {
                        tempArray[i] = cordArr[i];
                    }
                    tempArray[arraySize - 1] = newCord;

                    delete[] cordArr;
                    cordArr = nullptr;

                    cordArr = tempArray;
                    amountOfCords++;
                }
                else if ((counter % 2) != 0)
                {
                    cordX = number;
                }
            }

            // Create shape
            if (amountOfCords > 0)
            {
                if (amountOfCords == 1)
                {
                    Point p(cordArr[0]);
                }
                else if (amountOfCords == 2)
                {
                    Line l(cordArr[0], cordArr[1]);
                }
                else if (amountOfCords == 3)
                {
                    Triangle tr(cordArr[0], cordArr[1], cordArr[2]);
                }
                else
                {
                    Polygon pol(cordArr, amountOfCords);
                }
            }

            delete[] cordArr;
            cordArr = nullptr;
            myReadFile.close();
        }
    }
    getchar();
    return 0;
}
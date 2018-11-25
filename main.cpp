#include <fstream>
#include "point.h"
#include "line.h"
#include "triangle.h"
#include "polygon.h"

// Checks if text contains characters '-' or '.' and is a real (valid) number
bool ValidNumber(std::string inputToCheck);

double RoundThreeDecimals(double nrToRound);

int main(int argc, const char *argv[])
{
    if (argc > 1)
    {
        std::ifstream myReadFile;
        myReadFile.open(argv[1]);

        if (myReadFile)
        {
            int coordCounter = 0; // used to determine if each coordinate have one X and one Y
            int amountOfCoordinates = 0;
            int arraySize = 0;

            std::string line = "";
            double cordX = 0.0;
            double cordY = 0.0;

            Coordinate *cordArr = new Coordinate[arraySize];

            while (myReadFile >> line)
            {
                if (ValidNumber(line))
                {
                    coordCounter++;
                    double readNr = stod(line); // Converts text to double

                    // For every 2nd read number we add a coordinate to the cord array
                    if ((coordCounter % 2) == 0)
                    {
                        cordY = readNr;

                        arraySize++;
                        Coordinate tempCord(cordX, cordY);
                        Coordinate *tempArray = new Coordinate[arraySize];

                        for (int i = 0; i < (arraySize - 1); i++)
                        {
                            tempArray[i] = cordArr[i];
                        }
                        tempArray[arraySize - 1] = tempCord;

                        delete[] cordArr;
                        cordArr = nullptr;

                        cordArr = tempArray;
                        amountOfCoordinates++;
                    }
                    else if ((coordCounter % 2) != 0)
                    {
                        cordX = readNr;
                    }
                }
                else
                {
                    return -1;
                }
            }

            // Make sure cords were read properly with one x and one y
            if (amountOfCoordinates > 0 && ((coordCounter % 2) == 0))
            {
                if (amountOfCoordinates == 1)
                {
                    Point p(cordArr[0]);
                    std::cout << RoundThreeDecimals(p.Area()) << '\n';
                }
                else if (amountOfCoordinates == 2)
                {
                    Line l(cordArr);
                    std::cout << RoundThreeDecimals(l.Area()) << '\n';
                }
                else if (amountOfCoordinates == 3)
                {
                    Triangle tr(cordArr);
                    std::cout << RoundThreeDecimals(tr.Area()) << '\n';
                }
                else
                {
                    Polygon pol(cordArr, amountOfCoordinates);
                    std::cout << RoundThreeDecimals(pol.Area()) << '\n';
                }
            }
            else
            {
                return 1;
            }

            delete[] cordArr;
            cordArr = nullptr;
            myReadFile.close();

            getchar();
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
double RoundThreeDecimals(double nrToRound)
{
    double roundedNr = round(nrToRound * 1000) / 1000;
    return roundedNr;
}
bool ValidNumber(std::string inputToCheck)
{
    bool isValid = true;

    int maxDotCharacters = 1;
    int maxMinusCharacters = 1;

    int currentDotAmount = 0;
    int currentMinusAmount = 0;

    for (int i = 0; i < inputToCheck.length() && isValid == true; i++)
    {
        if (!(isdigit(inputToCheck[i])))
        {
            if (i == 0)
            {
                if (inputToCheck[i] == '-')
                {
                    currentMinusAmount++;
                }
                else
                {
                    isValid = false;
                }
            }
            else
            {
                if (inputToCheck[i] == '.')
                {
                    currentDotAmount++;
                }
                else
                {
                    isValid = false;
                }

                if (isValid && ((currentDotAmount > maxDotCharacters) || (currentMinusAmount > maxMinusCharacters)))
                {
                    isValid = false;
                }
            }
        }
    }
    return isValid;
}
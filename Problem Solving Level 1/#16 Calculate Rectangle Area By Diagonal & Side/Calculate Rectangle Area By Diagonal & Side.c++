#include <iostream>
#include <map>
#include <cmath>

using namespace std;

map<string, float> Read_Rectangle_Info()
{
    float diagonal, side1;

    cout << "Enter the diagonal of the rectangle: ";
    cin >> diagonal;

    cout << "Enter the first side of the rectangle: ";
    cin >> side1;

    map<string, float> RectangleInfo;
    RectangleInfo["Diagonal"] = diagonal;
    RectangleInfo["Side1"] = side1;

    return RectangleInfo;
}

map<string, float> Calculate_Side_2(map<string, float> Rectangle_Info)
{
    float side1 = Rectangle_Info["Side1"];
    float side2 = sqrt(pow(Rectangle_Info["Diagonal"], 2) - pow(Rectangle_Info["Side1"], 2));

    map<string, float> RectangleSides;
    RectangleSides["Side1"] = side1;
    RectangleSides["Side2"] = side2;

    return RectangleSides;
}

float Calculate_Area(map<string, float> Rectangle_Info)
{
    return Rectangle_Info["Side1"] * Rectangle_Info["Side2"];
}

void Print_Result(float Result)
{
    cout << "Rectangle Area is: " << Result << endl;
}

int main ()
{
    Print_Result(Calculate_Area(Calculate_Side_2(Read_Rectangle_Info())));
}
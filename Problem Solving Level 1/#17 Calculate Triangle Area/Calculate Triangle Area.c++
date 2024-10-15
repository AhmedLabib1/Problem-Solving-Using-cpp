#include <iostream>
#include <map>

using namespace std;

map<string, float> Read_Info()
{
    float Base, Height;
    
    cout << "Enter Triangle Base: ";
    cin >> Base;

    cout << "Enter Triangle Height: ";
    cin >> Height;

    map<string, float> TriangleInfo;
    TriangleInfo["Base"] = Base;
    TriangleInfo["Height"] = Height;

    return TriangleInfo;
}

float Calculate_Area(map<string, float> TriangleInfo)
{
    float Area = 0.5 * TriangleInfo["Base"] * TriangleInfo["Height"];
    return Area;
}

void Print_Result(float Result)
{
    cout << "Triangle Area is: " << Result << endl;
}

int main ()
{
    Print_Result(Calculate_Area(Read_Info()));
}
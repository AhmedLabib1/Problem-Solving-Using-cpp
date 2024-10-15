#include <iostream>
#include <cmath>
#include <map>

using namespace std;

float Read_Info()
{
    float Diameter;
    
    cout << "Enter Circle radius: ";
    cin >> Diameter;

    return Diameter;
}

float Calculate_Area(float Diameter)
{
    const float PI = 3.141592653589793238;

    float Area = (PI * pow(Diameter, 2)) / 4;
    return Area;
}

void Print_Result(float Result)
{
    cout << "Circle Area is: " << Result << endl;
}

int main ()
{
    Print_Result(Calculate_Area(Read_Info()));
}
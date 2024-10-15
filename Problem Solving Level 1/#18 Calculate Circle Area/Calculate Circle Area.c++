#include <iostream>
#include <cmath>
#include <map>

using namespace std;

float Read_Info()
{
    float radius;
    
    cout << "Enter Circle radius: ";
    cin >> radius;

    return radius;
}

float Calculate_Area(float radius)
{
    const float PI = 3.141592653589793238;

    float Area = PI * pow(radius, 2);
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
#include <iostream>
#include <vector>

using namespace std;

vector<float> ReadRectangleInfo()
{
    vector<float> RectangleInfo(2);

    for (float& Info : RectangleInfo)
    {
        cin >> Info;
    }
    return RectangleInfo;
}

float CalculateRectangleArea(vector<float> RectangleInfo)
{
    float Area = RectangleInfo[0] * RectangleInfo[1];
    return Area;
}

void PrintResult(float Area)
{
    cout << "The Rectangle Area is: " << Area << endl;
}

int main ()
{
    PrintResult(CalculateRectangleArea(ReadRectangleInfo()));
}
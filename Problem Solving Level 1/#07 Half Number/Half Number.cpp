#include <iostream>
#include <limits> // Include this header for std::numeric_limits

using namespace std;

float Num;

float ReadNumber()
{
    cout << "Enter Your Numbr" << endl;
    cin >> Num;

    while (cin.fail())
	{
        cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Invalid number, Enter a valid one" << endl;
		cin >> Num;
	}

    return Num;
}

float CalculateHalfNumber(float Num)
{
    float HalfNum = Num / 2;
    return HalfNum;
}

void PrintHalfNumber(float HalfNum)
{
    cout << "The Half of " << Num << " is " << HalfNum << endl;
}

int main ()
{
    PrintHalfNumber(CalculateHalfNumber(ReadNumber()));
}
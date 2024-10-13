#include <iostream>

using namespace std;

enum enNumberType {Odd = 1, Even = 2};

int RadNumber()
{
    cout << "Enter Your Number" << endl;
    
    int Num;
    cin >> Num;

    return Num;
}

enNumberType CheckNumberType (int Num)
{
    if (Num % 2 == 0)
    {
        return enNumberType::Even;
    }

    else 
    {
        return enNumberType::Odd;
    }
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
    {
        cout << "Number is Even" << endl;
    }

    else 
    {
        cout << "Number is Odd" << endl;
    }
}

int main ()
{
    PrintNumberType(CheckNumberType(RadNumber()));
}
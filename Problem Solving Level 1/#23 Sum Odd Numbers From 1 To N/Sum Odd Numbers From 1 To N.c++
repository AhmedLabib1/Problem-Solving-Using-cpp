#include <iostream>

using namespace std;

int ReadNumber()
{
    int Num;

    cout << "Enter a Number" << endl;
    cin >> Num;

    return Num;
}

int SumOddFrom1ToN_UsingWhile(int N)
{
    int Count = 1;
    int Sum = 0;

    while(Count <= N)
    {
        if (Count % 2 == 1)
        {
            Sum += Count;
        }
        Count++;
    }
    return Sum;
}

int SumOddFrom1ToN_UsingDoWhile(int N)
{
    int Count = 1;
    int Sum = 0;

    do
    {
        if (Count % 2 == 1)
        {
            Sum += Count;
        }
        Count++;
    }while(Count <= N);

    return Sum;
}

int SumOddFrom1ToN_UsingFor(int N)//10
{
    int Sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 1)
        {
            Sum += i;
        }
    }
    return Sum;
}

int main ()
{
    int N = ReadNumber();
    
    cout << SumOddFrom1ToN_UsingWhile(N) << endl;
    cout << SumOddFrom1ToN_UsingDoWhile(N) << endl;
    cout << SumOddFrom1ToN_UsingFor(N) << endl;
}
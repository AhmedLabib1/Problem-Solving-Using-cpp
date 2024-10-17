#include <iostream>

using namespace std;

int ReadNumber()
{
    int Num;

    cout << "Enter a Number" << endl;
    cin >> Num;

    return Num;
}

void PrintRangeFrom1ToN_UsingWhile(int N)
{
    int count = N;
    while(count)
    {
        cout << count << " ";
        count--;
    }
}

void PrintRangeFrom1ToN_UsingDoWhile(int N)
{
    int count = N;

    do
    {
        cout << count << " ";
        count--; 
    }while(count);
}

void PrintRangeFrom1ToN_UsingFor(int N)
{
    for (int i = N; i >= 1; i--)
    {
        cout << i << " " ;
    }
}

int main ()
{
    PrintRangeFrom1ToN_UsingWhile(ReadNumber());
    cout << "\n---------------------------------" << endl;

    PrintRangeFrom1ToN_UsingDoWhile(ReadNumber());
    cout << "\n---------------------------------" << endl;

    PrintRangeFrom1ToN_UsingFor(ReadNumber());
    cout << "\n---------------------------------" << endl;
}
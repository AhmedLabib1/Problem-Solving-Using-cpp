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
    int count = 1;
    while(count <= N)
    {
        cout << count << " ";
        count++;
    }
}

void PrintRangeFrom1ToN_UsingDoWhile(int N)
{
    int count = 1;

    do
    {
        cout << count << " ";
        count++; 
    }while(count <= N);
}

void PrintRangeFrom1ToN_UsingFor(int N)
{
    for (int i = 1; i <= N; i++)
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
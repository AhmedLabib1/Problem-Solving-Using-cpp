#include <iostream>

using namespace std;

int Read_Age()
{
    int Age;

    cout << "Enter Age Between 18 and 45" << endl;
    cin >> Age;

    return Age;
}

bool ValidateAgeBetweenRange(int Age, int From, int To)
{
    return ((Age >= From) && (Age <= To));
}

int ReadUntilAgeBetween(int From, int To)
{
    int Age;

    do{
        Age = Read_Age();
    } while(!ValidateAgeBetweenRange(Age, From, To));

    return Age;
}

void Print_Age(int Age)
{
    cout << "Your Age is: " << Age << endl;
}

int main ()
{
    Print_Age(ReadUntilAgeBetween(18, 45));
}
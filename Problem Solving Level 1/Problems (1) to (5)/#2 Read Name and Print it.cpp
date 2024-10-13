#include <iostream>
#include <string>

using namespace std;

string ReadName()
{
    string Name;
    cout << "Enter Your Name" << endl;
    getline(cin, Name);

    return Name;
}

void PrintName(string Name)
{
    cout << "Hello, " << Name << endl;
}

int main ()
{
    PrintName(ReadName());
}
#include <iostream>

using namespace std;

struct stInfo
{
    int age;
    bool HasDrivingLicense;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Enter Your Age" << endl;
    cin >> Info.age;

    cout << "Do you Have a Driver License" << endl;
    cin >> Info.HasDrivingLicense;

    return Info;
}

bool isAccepted(stInfo Info)
{
    if (Info.age > 21 && Info.HasDrivingLicense == true)
    {
        return true;
    }

    else 
    {
        return false;
    }
}

void PrintResult(stInfo Info)
{
    if (isAccepted(Info))
    {
        cout << "Hired" << endl;
    }

    else 
    {
        cout << "Rejected" << endl;
    }
}

int main ()
{
    PrintResult(ReadInfo());
}
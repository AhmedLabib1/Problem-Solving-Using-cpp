#include <iostream>

using namespace std;

struct stInfo
{
    int age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Enter Your Age" << endl;
    cin >> Info.age;

    cout << "Do you Have a Driver License" << endl;
    cin >> Info.HasDrivingLicense;
    
    cout << "Do you Have a HasRecommendation" << endl;
    cin >> Info.HasRecommendation;

    return Info;
}

bool isAccepted(stInfo Info)
{
    return (Info.HasRecommendation == true)? true : (Info.age > 21 && Info.HasDrivingLicense == true)? true : false;
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
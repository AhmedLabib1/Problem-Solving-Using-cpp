#include <iostream>

using namespace std;

enum enPassFail {Pass = 1, Fail = 0};

int ReadMark ()
{
    float Mark;

    cout << "Enter Your Mark" << endl;
    cin >> Mark;

    return Mark;
}

enPassFail CheckMark(int Mark)
{
    return (Mark >= 50)? enPassFail::Pass : enPassFail::Fail;
}

void PrintResult(enPassFail PassFail)
{
    if(PassFail == enPassFail::Pass)
        cout << "You Passed" << endl;
    else 
        cout << "You Failed" << endl;
}

int main ()
{
    PrintResult(CheckMark(ReadMark()));
}
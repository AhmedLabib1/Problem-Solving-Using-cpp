#include <iostream>
#include <vector>

using namespace std;

enum enPassFail {Pass = 1, fail = 0};

vector<int> ReadNumbers()
{
    vector<int> Numbers(3);

    int index = 0;
    for (int& num : Numbers)
    {
        cout << "Enter Number " << index + 1 << ": ";
        cin >> num;
        index++;
    }

    return Numbers;
}

int sum_of_numbers(const vector<int>& Numbers)
{
    int sum = 0;
    for (int num : Numbers)
    {
        sum += num;
    }
    return sum;
}

float average_of_numbers(int sum)
{
    return sum/3.0f;
}

enPassFail CheckAverage(float avg)
{
    return (avg >= 50)? enPassFail::Pass : enPassFail::fail;
}

void Prin_result(int CheckResult)
{
    if (CheckResult == enPassFail::Pass)
        cout << "You Passed" << endl;
    
    else 
        cout << "You Failed" << endl;
}

int main ()
{
    Prin_result(CheckAverage(average_of_numbers(sum_of_numbers(ReadNumbers()))));
}
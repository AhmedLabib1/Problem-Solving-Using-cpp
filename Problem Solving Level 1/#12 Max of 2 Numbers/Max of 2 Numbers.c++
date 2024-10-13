#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ReadNumbers()
{
    vector<int> Numbers(2);

    int index = 0;
    for (int& num : Numbers)
    {
        cout << "Enter Number " << index + 1 << ": ";
        cin >> num;
        index++;
    }

    return Numbers;
}

int CalculateMaxNumber(vector<int> Numbers)
{
    int max_number = *max_element(Numbers.begin(), Numbers.end());
    return max_number;
}

void PrintResult(int MaxNumber)
{
    cout << "The Maximum Number is: " << MaxNumber << endl;
}

int main ()
{
    PrintResult(CalculateMaxNumber(ReadNumbers()));
}
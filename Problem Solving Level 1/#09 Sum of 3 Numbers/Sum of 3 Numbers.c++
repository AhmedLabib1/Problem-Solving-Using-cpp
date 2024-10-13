#include <iostream>
#include <vector>

using namespace std;

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

void Prin_Sum(int sum)
{
    cout << "Sum of Numbers is:" << sum << endl;
}

int main ()
{
    Prin_Sum(sum_of_numbers(ReadNumbers()));
}
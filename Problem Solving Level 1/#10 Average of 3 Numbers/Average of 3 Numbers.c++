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

float average_of_numbers(int sum)
{
    return sum/3.0f;
}

void Prin_avg(float avg)
{
    cout << "avg of Numbers is:" << avg << endl;
}

int main ()
{
    Prin_avg(average_of_numbers(sum_of_numbers(ReadNumbers())));
}
#include <iostream>
#include <vector>
#include <utility> // For std::swap

using namespace std;

vector<int> Read2Numbers()
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

vector<int> Swap2Numbers(vector<int> Numbers)
{
    swap(Numbers[0], Numbers[1]);
    return Numbers;
}

void PrintResult(vector<int> Numbers)
{
    cout << "----------------------" << endl;
    cout << "Numbers After Swapping" << endl;
    for(int num : Numbers)
    {
        cout << num << endl;
    }
}

int main ()
{
    PrintResult(Swap2Numbers(Read2Numbers()));
}
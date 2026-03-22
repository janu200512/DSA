#include <iostream>
#include <vector>
using namespace std;

int majoEle(vector<int> vec)
{
    int n = vec.size();

    for (int val : vec)
    {
        int freq = 0;
        for (int el : vec)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {1, 2, 1, 4, 1};

    cout<< majoEle(vec);
}
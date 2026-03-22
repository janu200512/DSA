#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int sz = 5;
    int start = 0;
    int end = sz - 1;

    while (start < end)
    //for(start; start <end; start++)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }

    for (int i = 0; i < sz; i++)
    {
        cout << array[i] << " ";
    }
}
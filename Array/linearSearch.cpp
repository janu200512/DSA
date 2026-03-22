#include <iostream>
using namespace std;

int linearSearch(int array[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 4;

    cout << linearSearch(array, target, size);
}

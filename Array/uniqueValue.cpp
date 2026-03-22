#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 3, 4, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    // Print all Unique values

    for (int i = 0; i < n; i++)
    {
        bool unique = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            cout << arr[i] << " ";
        }
    }
}

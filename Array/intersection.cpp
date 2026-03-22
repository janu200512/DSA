#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 2};
    int B[] = {2, 4, 6, 2};

    int n = 5, m = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                cout << A[i] << " ";
                B[j] = -1;   //mark as used  element consume
                break;
            }
        }
    }
}
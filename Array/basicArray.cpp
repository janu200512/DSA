#include <iostream>
using namespace std;
int main()
{
    int marks[] = {1, 2, 3, 4, 5};

    int n = sizeof(marks) / sizeof(int);
    marks[1] = 6;
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }
     

    int number[5];
    cout<<"Enter numbers : ";
    for(int i = 0; i<n; i++){
        cin>>number[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << number[i] << " ";
    }
}
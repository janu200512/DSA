#include <iostream>
#include <Climits>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(int);
    
    // Sum & Product
    int sum = 0;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
        product = product * array[i];
    }
    cout<< "sum : "<<sum<<endl;
    cout<< "product : "<<product<<endl;

    //swap the max & min
    
    int min_idx = 0;
    int max_idx = 0;
     
    for (int i = 0; i < n; i++)
    {
        if(array[i] < array[min_idx]){
            min_idx = i;
        }
        if(array[i] > array[min_idx]){
            max_idx = i;
        }
    }
    
swap(array[max_idx],array[min_idx]);
    cout<<"After Swapping : ";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }


}
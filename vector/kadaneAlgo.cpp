#include <iostream>
#include <Climits>
#include <vector>
using namespace std;
int main()
{

    vector<int> vec = {-121, -23, -13, 4, -5};
    int n = vec.size();

    int maxSum = INT_MIN;

    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        
          currSum += vec[i];
            maxSum = max(currSum,maxSum);
        
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"max Subarray sum : "<< maxSum <<endl;
}
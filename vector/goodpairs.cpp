#include <iostream>
#include <vector>
using namespace std;

    int numIdenticalPairs(vector<int> & nums)
    {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    ans++;
                }
            }
        }
        return ans;
    }

    int main()
{
    vector<int>nums ={1,2,3,4,5};
    numIdenticalPairs(nums);


}
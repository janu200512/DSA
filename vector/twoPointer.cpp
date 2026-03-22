#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target)
{
    vector<int> ans;
    int n = vec.size();
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        if (vec[start] + vec[end] == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (vec[start] + vec[end] > target)
        {
            end--;
        }

        else if (vec[start] + vec[end] < target)
        {
            start++;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int target = 7;

    vector<int> ans = pairSum(vec, target);

    cout << ans[0] << " " << ans[1];
}
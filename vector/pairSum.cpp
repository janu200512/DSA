#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target)
{
    vector<int> ans;
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (vec[i] + vec[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2, 3, 5, 1, 3};
    int target = 7;

    vector<int> ans = pairSum(vec, target);

    cout << ans[0] << " " << ans[1];
}
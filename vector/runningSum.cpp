#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> vec = {1, 2, 3, 4, 5};
    int n = vec.size();

        vector<int>ans(n);
        ans[0] =  vec[0];
        for(int i = 1; i < n; i++){
            ans[i] =  ans[i -1] + vec[i];
        }
        for(int i = 0; i < n; i++){
            cout<<ans[i] <<" ";
        }

    }

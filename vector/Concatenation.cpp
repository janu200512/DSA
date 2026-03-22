#include <iostream>
#include <Climits>
#include <vector>
using namespace std;
int main()
{

    vector<int> vec = {1, 2, 3, 4, 5};
    int n = vec.size();

        vector<int>ans(2 * n);
        for(int i = 0; i < n; i++){
            ans[i] = vec[i];
        }

        for(int i = 0; i < n; i++){
            ans[i+n] = vec[i];
        }

        for(int i = 0; i < 2*n; i++){
            cout<< ans[i] <<" ";
        }
    }

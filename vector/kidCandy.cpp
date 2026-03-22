#include <iostream>
#include <Climits>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> candi = {1, 2, 3, 4, 5};
    int extraCandi = 3;
    int n = candi.size();

//     vector<bool>ans(n);
// int maxCandi = INT_MIN;
//     for(int val : candi){
// maxCandi = max(maxCandi, val);
//     }

//     for(int i = 0; i < n; i++){
//         if(candi[i] + extraCandi >= maxCandi){
// ans[i] = true;
//         }
//         else{
//             ans[i] = false;
//         }

//     }
int maxCandi = *max_element(candi.begin(), candi.end());

        vector<bool> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = (candi[i] + extraCandi >= maxCandi);
        }

    for(bool val : ans){
cout<<val<< " ";
    }

    }

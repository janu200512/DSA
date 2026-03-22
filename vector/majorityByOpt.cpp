#include <iostream>
#include <vector>
#include <Algorithm>
using namespace std;

int majoEle(vector<int>vec)
{
    int n = vec.size();

    sort(vec.begin(),vec.end());

    int freq = 1, ans = vec[0];
    for(int i = 0; i < n; i++){
        if(vec[i] == vec[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = vec[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
return ans;
}

int main()
{
    vector<int> vec = {1, 2, 1, 4, 1};

    cout<< majoEle(vec);
}
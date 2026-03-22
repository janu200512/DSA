#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>ve;
vector<int>v0(3,0); // 3 size ka vector aur har index par 0 store hoga

vector<int>vec = {1,2,3};
vector<char>ch = {'a','b','c','d'};

//vector Functions
cout<<"vector size : "<<vec.size() <<endl;

vec.push_back(4);
cout<<"after pushback : "<<vec.back() <<endl;
cout<<"vector capacity : "<<vec.capacity() <<endl;
vec.pop_back();
cout<<"after popback : "<<vec.back() <<endl;

cout<<"Element at front : "<<vec.front() <<endl;

cout<<"Element at index 2 : "<<vec.at(2) <<endl;
}
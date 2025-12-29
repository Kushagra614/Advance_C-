#include<bits/stdc++.h>

using namespace std;

/*
nums = [1,2,3,5,5,6]
using a map
*/

bool bruteF(vector<int>&nums)
{
    unordered_map<int,int>mp;
    for(auto i : nums)
    {
        mp[i]++;
    }

    //looping thru the map
    for(auto it : mp)
    {
        if(it.second > 1) return false;
    }
    return true;
}

int main()
{
    vector<int>nums = {1,2,3,5,5,6};
    bool ans = true;
    bool res = bruteF(nums);

    if(res == ans) {cout<< "Correct ans";}
    else{
        cout<<"Wrong ans";
    }
    return 0;
}
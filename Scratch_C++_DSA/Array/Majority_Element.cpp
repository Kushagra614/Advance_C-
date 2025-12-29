// MAJORITY ELEMENT

/*
mj = ele > [n/2] times 

eg -> [3533377]
3 -> 4 times
5-> 1 time
7 -> 2 times
MJ = 3


*/

#include<bits/stdc++.h>
using namespace std;

// ------BRUTE FORCE ----------- TC => O(nlogn) 

int bruteF(vector<int>&nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int limit = n/2;
    int ans = -1;
    int count = 1;
    for(int i = 0; i < n; i++)
    {
        if(i > 0 && nums[i] == nums[i-1])
        {
            count++;
            if(count > limit){
                ans = nums[i];
                break;
            } 
            
        }
        else{
            count = 1;
        }
    }

    return ans;
}

// ------OPT APPROACH ----------- TC => O(n)
int optApproach(vector<int>& nums)
{
    //using a hashmap
    int limit = nums.size()/2;
    unordered_map<int,int>mp;
    for(auto &i : nums)
    {
        mp[i]++;
    }

    for( auto &it : mp)
    {
        if(it.second > limit)
        {
            return it.first;
        }
    }
    return -1;
} 

int main()
{
    vector<int>nums = {3,5,3,3,3,7,7};
    // cout << bruteF(nums);
    cout<< optApproach(nums);
    
    return 0;

}
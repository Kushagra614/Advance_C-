#include<bits/stdc++.h>
using namespace std;

/*
 nums -> {0,0,1,1,1,2,2,3,3,4}
 ans = [0,1,2,3,4,0]
brute force -> to put it in a set and then get it out

*/
int bruteForce(vector<int>&nums)
{
    int n = nums.size();
    unordered_set<int>st(nums.begin(), nums.end());
    return st.size();

}

// -----OPT APPROACH-------
int optApp(vector<int>&nums)
{
    int n = nums.size();
    int i = 0;
    for(int j =1; j < n; j++)
    {
        if(nums[i] != nums[j])
        {
            nums[i+1] = nums[j];
            i++;
        }
    }

    return i+1;
}

int main()
{
    vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
    int uni = optApp(nums);
    cout << uni;

    return 0;
}
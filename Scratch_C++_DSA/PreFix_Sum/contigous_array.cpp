#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    int n = nums.size();

    int zero = 0;
    int one = 0;
    int res = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        (nums[i] == 0) ? zero++ : one++;
        int diff = zero - one;
        if (diff == 0)
            res = max(res, i + 1);

        if (mp.count(diff))
        {
            res = max(res, i - mp[diff]);
        }
        else
        {
            mp[diff] = i;
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {0,0,1,0,1,1,0,1,0};
    int res = solve(nums);
    cout << res;
}
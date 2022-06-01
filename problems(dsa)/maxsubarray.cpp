// kadane's algorithm
int maxSubArray(vector<int> &nums)
{
    int loc_max_prev = 0, loc_max = nums[0], ans = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        loc_max = max(nums[i], loc_max_prev + nums[i]);
        loc_max_prev = loc_max;

        if (ans < loc_max)
            ans = loc_max;
    }

    return ans;
}
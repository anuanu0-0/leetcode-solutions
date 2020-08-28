// TC: O(n)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 0, n = nums.size();
        if(n <= 1)
            return n;
        for(int i=1; i<n; i++) {
            if(nums[i] != nums[res]) {
                swap(nums[res+1], nums[i]);
                res++;
            }
        }
        res += 1;
        return res;
    }
};

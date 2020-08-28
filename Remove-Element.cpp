//  TC: O(n)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(), res = -1;
        
        for(int i=0; i<n; i++) {
            if(nums[i] != val) {
                swap(nums[i], nums[res+1]);
                res++;
            }
        }
        res += 1;
        return res;
    }
};

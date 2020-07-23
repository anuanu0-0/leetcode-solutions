// ONE PASS SOLUTION: USING 3 POINTER | PARTITIONING APPROACH
// TC: O(n) and AS: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1, mid = 0;
        while( mid <= end){
            if(nums[mid]==0){
                swap(nums[start], nums[mid]);
                start++;
                mid++;
            }
            else if(nums[mid]==1)
                mid++;
            else if(nums[mid] == 2){
                swap(nums[mid], nums[end]);
                end--;
            }
        }
    }
};

// TWO PASS SOLUTION
// TC: O(n) and AS: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] == 0)
                zero++;
            else if(nums[i] == 1)
                one++;
            else
                two++;
        }
        
        nums.clear();
        
        for(int i=0; i<n; i++) {
            if(zero > 0) {
                nums.push_back(0);
                zero--;
            }
            else if(one > 0) {
                nums.push_back(1);
                one--;
            }
            else {
                nums.push_back(2);
                two--;
            }
        }
    }
};


// OTHER SOLUTIONS INCLUDE
//  -USING HASH MAP
//  -USING QUICK SORT
//  -USING TWO POINTERS(N^2 COMPLEXITY)

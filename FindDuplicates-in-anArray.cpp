//Time Complexity: O(n)
//Auxilary Space: O(1)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int index = 0;
        for(int i=0; i<nums.size(); i++) {
            index = abs(nums[i])-1;
            if(nums[index] < 0) {
                res.push_back(abs(index+1));
            }
            nums[index] = -nums[index];  
        }
        
        return res;
    }
};

// Other possible solutions
// 1.  NAIVE SOL:  O(n^2) , Using 2 for loops . Auxilary Space / AS : O(1)
// 2. O(nlogn) solution : Sorting and then looping once to compare with previous elements.  AS : O(1)
// 3. O(n) solution with Auxilary Space O(n): Using unordered_map / hashing. As we cannot return map, ve have 
//  to copy the duplicates in a vector and return it, as return type is a vector.

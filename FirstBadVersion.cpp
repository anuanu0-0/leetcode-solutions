// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


//  First Version
class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
       
        while(low < high) {
            int mid = low + (high-low) /2;
            if( isBadVersion(mid)) {
                
                 high = mid;
            } else {
               low = mid + 1;
            }
        }
        return high;
    }
};


//  Another Version
class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        while(low <= high) {
            int mid = low + (high-low)/2;
            if(isBadVersion(mid) == false)
                low = mid+1;
            else if(isBadVersion(mid) == true)
                high = mid-1;
            else {
                if(mid == 0 || isBadVersion(mid) != isBadVersion(mid-1))
                    return mid;
                else 
                    high = mid-1;
            }
        }
        return low;
    }
};

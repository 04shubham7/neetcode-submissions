class Solution {
public:
    int search(vector<int>& nums, int target) {
         // Iterative approach
        int low = 0, high = nums.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2; // Calculate mid within the loop
            
            if (nums[mid] == target) {
                return mid;
            } else if (target > nums[mid]) {
                low = mid + 1; // Move the low pointer up
            } else {
                high = mid - 1; // Move the high pointer down
            }
        }
        
        return -1; // Target not found
    }
};

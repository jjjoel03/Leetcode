class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*int i=0;

        while(i<nums.size() && nums[i]<=target){
            if(nums[i]==target){
                break;
            }
            i++;
        }
        return i;*/
        int right=nums.size()-1, left=0;
        while (left<=right){
        int mid=(left+right)/2;
        if (nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
       }
       return left; 
    }
};
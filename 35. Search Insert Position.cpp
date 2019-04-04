/*
problem link:https://leetcode.com/problems/search-insert-position/
 problem name:35. Search Insert Position
 status:accpted
 author :mohand sakr
*/


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len=nums.size();
        int value=0;
        for(int i=0;i<len;i++){
            if(nums[i]==target){
                value= i;
                break;
            }
            else if(nums[i]>target) 
            {
                value= i;
                break;
            }
            else 
                value=len;
            
        }
        return value;
    }
};


 /***
 problem link:https://leetcode.com/problems/majority-element-ii/
 problem name:27. Remove Element
 status:accpted
 author :mohand sakr
 
 
 ***/
 
 
 
 
 
 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cou=count(nums.begin(),nums.end(),val);
        int len=nums.size();
        int le= nums.size()-cou;
        for(int i=0;i<len;i++){
            if(nums[i]==val)
                nums[i]=100000000;
        }
        sort(nums.begin(),nums.end());
        return le;
        
        
    }
};

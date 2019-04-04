/*
 problem link: https://leetcode.com/problems/move-zeroes/
 problem name:283. Move Zeroes
 status:accpted
 author :mohand sakr
 
 

*/
class Solution {
public:
   void moveZeroes(vector<int>& nums) {
        int len=nums.size();
       int count=0;
       vector<int> vect;
        for(int i=0;i<len;i++){
            if(!nums[i]){
                 ++count;
            }
            else{
                vect.push_back(nums[i]);
            }
        }
       for(int i=0;i<count;i++){
           vect.push_back(0);
       }
       for(int i=0;i<len;i++)
       {
           nums[i]=vect[i];
       }
    }
    
};

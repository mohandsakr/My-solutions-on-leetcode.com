 /*
 problem link:https://leetcode.com/problems/majority-element-ii/
 problem name:229. Majority Element II
 status:accpted
 author :mohand sakr
 
 
 */
 class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> vect;
        int len=nums.size();
        map<int,int> ma;
                map<int,bool> ma2;

        
        for(int i=0;i<len;i++){
            ++ma[nums[i]];
            if(ma[nums[i]]>((double)len/3)&&!ma2[nums[i]]){
                vect.push_back(nums[i]);
                ma2[nums[i]]=1;
            }
        }
        
        return vect;
        
    }
};
 

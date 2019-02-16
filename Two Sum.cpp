
//problem link:https://leetcode.com/problems/add-two-numbers/
//problem name:Two Sum
//status:accept 
//time complexity : o(n^2)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
vector<int> vect;
        bool found=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]+nums[j]==target&&!found&&i!=j){
                    vect.push_back(i);
                    vect.push_back(j);
                    found=1;
                    break;
                   
                }
            }
        }
        
         return  vect;
    }
};

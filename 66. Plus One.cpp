problem link:https://leetcode.com/problems/plus-one/ 
 problem name:66. Plus One
 status:accpted
 author :mohand sakr*/
 
 
 
 
 class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int len=digits.size();
        int lastindex=-10;
 
      for(int i=len-1;i>=0;i--){
          if(digits[i]<9)
          {++digits[i];
           break;
           }
          else if(digits[i]==9) {
            digits[i]=0;
              lastindex=i; 
              
          }
      }
        if(lastindex==0)
        digits.insert(digits.begin(),1);
        
        
        
        
        
        
        
        return digits;
        
    }
};

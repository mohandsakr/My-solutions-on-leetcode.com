/*
probem link:https://leetcode.com/problems/valid-parentheses/
status:accepted
author :mohand sakr
problem name:20. Valid Parentheses .

*/
class Solution {
 public:

    bool isValid(string s) {
           stack<char>se;

        int len=s.length();
        for(int i=0;i<len;i++)
        {
             if(s[i]=='['||s[i]=='('||s[i]=='{')
             {
                se.push(s[i]);
             }
            
            else if(s[i]==']'){
                if(se.empty()||se.top()!='[')
                     return 0;
                     se.pop();
                   
            }
             else if(s[i]=='}'){
                if(se.empty()||se.top()!='{')
                     return 0;
                     se.pop();
                   
            }
             else if(s[i]==')'){
                if(se.empty()||se.top()!='(')
                     return 0;
                     se.pop();
                   
            }
            
               
            
     }
        
        return se.empty();
    
    }       
             
    
};

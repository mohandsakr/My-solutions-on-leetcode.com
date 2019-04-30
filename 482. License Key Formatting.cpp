/*
 problem link:https://leetcode.com/problems/license-key-formatting/
 problem name:482. License Key Formatting
 status:accpted
 author :mohand sakr
*/

class Solution {
public:
     string licenseKeyFormatting(string s, int k) {
        string s2,s1;
        int len=s.length();
        bool first=0;
        
        int charnum=0; 
        for(int i=0;i<len;i++){
            if(s[i]!='-')s1+=toupper(s[i]);
        
            
        }
        
                int len2=s1.length();
        int mod=len2%k;
    int count=0;

        for(int i=0;i<len2;i++){
            if(!first &&count==mod&&mod){
                first=1;
                s2+='-';
            }
            else if(i&&(abs(i-mod)%k==0)){
                s2+='-';
            }
            
            
            s2+=s1[i];
              ++count;

             
        }
        
        
        return s2;
        
    }
};


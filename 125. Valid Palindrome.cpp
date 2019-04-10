/*

problem link: https://leetcode.com/problems/valid-palindrome/
 problem name:125. Valid Palindrome
 status:accpted
 author :mohand sakr

*/
class Solution {
public:
    bool isPalindrome(string s) {
        int len=s.length();
        string s3,s4;
        for(int i=0;i<len;i++){
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
                s3+=tolower(s[i]);
        }
        cout<<s3<<endl;
        s4=s3;
        reverse(s3.begin(),s3.end());
        
        return s3==s4;
            
        
    }
};

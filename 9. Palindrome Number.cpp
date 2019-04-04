/*
 problem link: https://leetcode.com/problems/palindrome-number/
 problem name:9. Palindrome Number
 status:accpted
 author :mohand sakr
 
 
 */
 
 class Solution {
public:
    bool isPalindrome(int x) {
        string first=to_string(x);
        string second=first;
        reverse(first.begin(),first.end());
        if(first==second)
        {
            return 1;
        }
        else {
            return 0;
        }
        
        
        
        
    }
};

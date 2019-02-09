/*
Problem link:https://leetcode.com/problems/valid-anagram/
status:accepted
author :moahnd sakr
problem name:242. Valid Anagram

*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return 1;
        else
            return 0;
        
    }
};

/*
Problem link:https://leetcode.com/problems/rotate-string/
status:accepted
problem name:796. Rotate String
author :moahnd sakr

*/



class Solution {
public:
    bool rotateString(string A, string B) {
        int len1=A.length();
        int len2=B.length();
        if(len1!=len2) return 0;
        if(A==B) return 1;
      
        int coun=0;
        
        for(int i=1;i<=len1;i++){
             string s1 =A.substr(0,i);
             string s2 =A.substr(i,len1-i);
            string s3="";
                s3+=s2+s1;
            if(s3==B)
                ++coun;
        }
        
        if(coun) return 1;
        else return 0;
    }
};

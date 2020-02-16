/*
problem link:https://leetcode.com/problems/remove-duplicates-from-sorted-array/
problem name:26. Remove Duplicates from Sorted Array
status:accepted

note this is  the first  way to solve this problem;
*/

 class Solution {
public:
    int removeDuplicates(vector<int>& vect) {
        vector<int>ans;
     int len=vect.size();
     set<int> se;
             set<int> ::iterator it ;

        for(int i=0;i<len;i++){
            se.insert(vect[i]);
        }
        int i=0;
        for(it=se.begin();it!=se.end();it++)
        {
            vect[i]=*(it);
            ++i;
            
        }
        
        
        
//         return a;
        
        return se.size();
        
    }
};

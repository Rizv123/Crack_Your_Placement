#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> hash ;
        int prefix = 0 ,res = 0 ;
        hash[prefix] = 1 ;
        
        for( int i=0 ; i<nums.size() ; i++ ) {
            prefix += nums[i] ;

            if( hash.find(prefix-k)!=hash.end() )
                res += hash[prefix-k] ;
            hash[prefix]++ ;
        }
        
        return res ;
    }
};
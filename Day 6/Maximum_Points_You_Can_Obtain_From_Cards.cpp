#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        
        int N = nums.size() ;
        vector<int> prefix(N+1) ;
        prefix[0] = 0 ;
        
        for( int i=0 ; i<N ; i++ )
            prefix[i+1] = prefix[i] + nums[i] ;
        
        int totalsum = prefix.back() ;
        int res = 0 ;
        
        for( int i=0 ; i<k+1 ; i++ ) {
            int val = totalsum - prefix[i+N-k] + prefix[i] ;
            res = max(res , val ) ;
        }
        return res ;
    }
};
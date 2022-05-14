#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int r = nums[0] ;
        for( int i=1 ; i<nums.size() ; i++ ) {
            if( r==0 )
                return false ;
            r = max(r-1,nums[i]) ;
        }
        return true ;
    }
};
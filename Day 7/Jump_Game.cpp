#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool canJump(vector<int>& nums) {

        int rem = nums[0] ;

        for( int i=1 ; i<nums.size() ; i++ ) {
            if( rem==0 )
                return false ;
            rem = max(rem-1,nums[i]) ;
        }
        
        return true ;
    }
};
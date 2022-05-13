#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public :
    int majorityElement(vector<int>& nums) {
        int N = nums.size() ;
        unordered_map<int,int> hash ;
        for( int i=0 ; i<N ; i++ )
            hash[nums[i]]++ ;
        for( auto pr : hash )
            if( pr.second > N/2 )
                return pr.first ;
        return 0 ;
    }
} ;
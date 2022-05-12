#include<bits/stdc++.h>
using namespace std ;

class Solution {
public :
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        
        vector<vector<int>> res ;
        if( nums.size()<3 )
            return res ;

        for( int i=0 ; i<nums.size()-2 ; i++ ) {
            if( nums[i]>0 ) break ;
            if( i>0 && nums[i]==nums[i-1] ) continue ;
            
            int remsum = -nums[i] ;
            int beg = i+1 , end = nums.size()-1 ;
            
            while( beg<end ) {
                if( nums[beg]+nums[end] > remsum ) end-- ;
                else if( nums[beg]+nums[end] < remsum ) beg++ ;
                else {
                    res.push_back({nums[i],nums[beg],nums[end]}) ;
                    while( beg<end && nums[beg]==nums[beg+1] ) beg++ ;
                    while( beg<end && nums[end]==nums[end-1] ) end-- ;
                    beg++ ;
                    end-- ;
                }
            }
        }
        return res ;
    }
} ;
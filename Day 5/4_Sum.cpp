#include<bits/stdc++.h>
using namespace std ;

class Solution {
public :
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size() ;
        vector<vector<int>> res ;
        
        if( n<4 )
            return res ;
        
        sort( nums.begin() , nums.end() ) ;
        unordered_map<int,vector<pair<int,int>>> hash ;
        for( int i=0 ; i<n-1 ; i++ )
            for( int j=i+1 ; j<n ; j++ )
                hash[nums[i]+nums[j]].push_back({i,j}) ;
        
        for( int i=0 ; i<n ; i++ ) {
            if( i>0 && nums[i]==nums[i-1] )
                continue ;
            
            for( int j=i+1 ; j<n ; j++ ) {
                if( j>i+1 && nums[j]==nums[j-1] ) 
                    continue ;
                
                int remsum = target-nums[i]-nums[j] ;
                if( hash.find(remsum)!=hash.end() )
                    for( auto pr : hash[remsum] ) {
                        int x = pr.first ;
                        int y = pr.second ;
                        if( x>j ) {
                            if( !res.empty() && res.back()[0]==nums[i] && res.back()[1]==nums[j] && res.back()[2]==nums[x] && res.back()[3]==nums[y] )
                                    continue ;
                                res.push_back({nums[i],nums[j],nums[x],nums[y]}) ;
                        }
                    }
            }
        }
        return res ;
    }
} ;
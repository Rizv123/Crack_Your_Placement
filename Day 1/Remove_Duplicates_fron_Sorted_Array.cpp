#include<bits/stdc++.h>
using namespace std ;

class Solution {
public :
    int removeDuplicates(vector<int>& nums) {
        if( nums.size()==0 )
            return 0 ;
        
        int j=0 ;
        for( int i=0 ; i<nums.size() ; i++ )
            if( nums[i]!=nums[j] )
                nums[++j] = nums[i] ;
        
        return j+1 ;
    }
} ;

int main() {
    int n ; 
    cin>>n ;

    vector<int> nums(n) ;
    for( int i=0 ; i<n ; i++ )
    cin>>nums[i] ;

    Solution res ;
    cout<<res.removeDuplicates(nums)<<"\n" ;

    return 0 ;
}
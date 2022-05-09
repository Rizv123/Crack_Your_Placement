#include<bits/stdc++.h>
using namespace std ;

class Solution {
public :
    void sortColors(vector<int> &nums) {
        int left = 0 , mid = 0 , right = nums.size()-1 ;
        
        while( mid<=right )
        {
            if( nums[mid]==0 )
                swap(nums[mid++],nums[left++]) ;
            
            else if( nums[mid]==1 )
                mid++ ;
            
            else
                swap(nums[mid],nums[right--]) ;
        }
    }
} ;

int main() {
    int N ;
    cin>>N ;
    
    vector<int> nums(N) ;
    for( int i=0 ; i<N ; i++ )
        cin>>nums[i] ;
    
    Solution res ;
    res.sortColors(nums) ;
    
    for( int i=0 ; i<N ; i++ )
        cout<<nums[i]<<" " ;
    
    return 0 ;
}
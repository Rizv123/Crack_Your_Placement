#include<bits/stdc++.h>
using namespace std ;

class Solution {
public :
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp ;
        
        for( int i=0 ; i<nums.size() ; i++ )
        {
            if( mp.find(target-nums[i])!=mp.end() )
                return {i,mp[target-nums[i]]} ;
            
            mp[nums[i]] = i ;
        }
        
        return {} ;
    }
} ;

int main() {

    int N ;
    cin>>N ;
    
    vector<int> arr(N) ;
    for( int i=0 ; i<N ; i++ )
        cin>>arr[i] ;
    
    int target ;
    cin>>target ;
    
    Solution res ;
    vector<int> result = res.twoSum(arr,target) ;
    cout<<arr[result[0]]<<" "<<arr[result[1]] ;
    
    return 0 ;
}
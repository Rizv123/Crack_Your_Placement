#include<bits/stdc++.h>
using namespace std ;

class Solution {
public :
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int res = 0 ;
        vector<int> remfreq(k) ;
        remfreq[0] = 1 ;
        int prefix = 0 ;
        
        for( int i=0 ; i<nums.size() ; i++ )
        {
            prefix = (prefix + nums[i]%k + k)%k ;
            res += remfreq[prefix] ;
            remfreq[prefix]++ ;
        }

        return res ;
    }
} ;

int main() {
    
    int N ;
    cin>>N ;
    
    vector<int> arr(N) ;
    for( int i=0 ; i<N ; i++ )
        cin>>arr[i] ;
    
    int k ;
    cin>>k ;
    
    Solution res ;
    cout<<res.subarraysDivByK(arr,k) ;
    
    return 0 ;
}
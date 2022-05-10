#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public :
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;
        int val = INT_MAX ;

        for( int i=0 ; i<prices.size() ; i++ ) {
            val = min( val , prices[i] ) ;
            profit = max(profit,prices[i]-val) ;
        }

        return profit ;
    }
} ;

int main() {
    int N ;
    cin>>N ;
    vector<int> nums(N) ;
    
    for( int i=0 ; i<N ; i++ )
        cin>>nums[i] ;
    
    Solution res ;
    cout<<res.maxProfit(nums) ;
    
    return 0 ;
}
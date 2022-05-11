#include<bits/stdc++.h>
using namespace std ;

class Solution {
public :
    int maxProfit(vector<int>& prices) {
        
        int res = 0 ;
        
        for( int i=1 ; i<prices.size() ; i++ )
            res += max(prices[i]-prices[i-1],0) ;
        
        return res ;
    }
} ;
int main()  {

    int N ;
    cin>>N ;
   
    vector<int> arr(N) ;
    for( int i=0 ; i<N ; i++ )
        cin>>arr[i] ;
   
    Solution res ;
    cout<<res.maxProfit(arr) ; 
   
    return 0 ;
}
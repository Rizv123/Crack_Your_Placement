#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral ;
        int N = matrix.size() , M = matrix[0].size() ;
        int up = 0 , down = N-1 , left = 0 , right = M-1 ;
        while( up<=down || left<=right ) {

            for( int i=left ; i<=right ; i++ ) {
                if( up>down ) {
                    right = left-1 ;
                    break ;
                }
                spiral.push_back( matrix[up][i] ) ;
            }
            up++ ;

            for( int i=up ; i<=down ; i++ ) {
                if( left>right ) {
                    down = up-1 ;
                    break ;
                }
                spiral.push_back( matrix[i][right] ) ;
            }
            right-- ;

            for( int i=right ; i>=left ; i-- ) {
                if( up>down ) {
                    right = left-1 ;
                    break ;
                }
                spiral.push_back( matrix[down][i] ) ;
            }
            down-- ;

            for( int i=down ; i>=up ; i-- ) {
                if( left>right ) {
                    down = up-1 ;
                    break ;
                }
                spiral.push_back( matrix[i][left] ) ;
            }
            left++ ;
        }
        return spiral ;
    }
};
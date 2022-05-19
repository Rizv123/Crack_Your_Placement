class Solution {
public:
    string addBinary(string a, string b) {
        string res ="";
        int carry = 0 ;
        int i = a.length()-1;
        int j = b.length()-1;
        while( i >=0 || j>=0)
        {
            int c1 = 0 ,c2 = 0 ;
            if(i>=0)
            {
                c1 = a[i]-'0';
                i--;
            }
            if(j>=0)
            {
                c2 = b[j]-'0';
                j--;
            }
            int sum =0 ;
            sum = c1 +c2 +carry ;
            res+=to_string(sum%2);
            if(sum>1)
                carry = 1;
            else 
                carry = 0 ;
        }
        if(carry!=0)
        {
            res+=to_string(carry);
        }
        reverse(res.begin(), res.end());
        return res ;
    }
};
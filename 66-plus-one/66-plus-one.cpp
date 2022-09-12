class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
                vector<int> ans(n+1,0);
        ans[n]=((digits[n-1]+1)%10);
        int carry = ((digits[n-1]+1)/10);
        for(int i = 1;i<n;i++){
            ans[n-i]=((digits[n-1-i]+carry)%10);
            carry = ((digits[n-1-i]+carry)/10);
        }
        if(carry !=0)ans[0]=carry;
        else ans.erase(ans.begin());
        
        return ans;
    }
};
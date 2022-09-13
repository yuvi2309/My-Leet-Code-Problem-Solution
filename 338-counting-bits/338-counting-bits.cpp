class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        int i =1;
        ans[0]=0;
        while(i<n+1){
            ans[i]=ans[i/2]+i%2;
            i++;
        }
        return ans;
    }
};
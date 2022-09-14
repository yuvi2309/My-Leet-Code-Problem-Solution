class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans(numRows);
        // vector<int>tt;
        // tt.push_back(1);
        ans[0]={1};
        for(int i = 1;i<numRows;i++){
            vector<int> temp;
            for(int j =0;j<=i;j++){
                
                if(j==0||j==i){
                    temp.push_back(1);
                }
                else{
                    temp.push_back(ans[i-1][j]+ans[i-1][j-1]);
                //  ans[i].push_back(ans[i-1][j]+ans[i-1][j+1]);
                }
                ans[i] = temp;
            }
        }
        
        return ans;
    }
};
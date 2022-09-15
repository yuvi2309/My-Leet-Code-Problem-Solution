class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> minLen(triangle.back());
        for(int i = triangle.size()-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                minLen[j]=min(minLen[j+1],minLen[j])+triangle[i][j];
            }
        }
        return minLen[0];
    }
};
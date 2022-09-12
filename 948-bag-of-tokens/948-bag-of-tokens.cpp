class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        if(tokens.size()==0||power<tokens[0]) return 0;
        int i=0,j=tokens.size()-1;
        int score = 0;
        int maxScore = 0;
        while(i<=j){
            if(power>=tokens[i]){
                power = power- tokens[i];
                score++;
                i++;
                maxScore = max(score,maxScore);
                if(i>tokens.size()-1)return maxScore;
            }
            if(power < tokens[i]){
                power = power + tokens[j];
                score--;
                j--;
                
                maxScore = max(score,maxScore);
                if(j<0)return maxScore;
            }
        }
        return maxScore;
    }
};
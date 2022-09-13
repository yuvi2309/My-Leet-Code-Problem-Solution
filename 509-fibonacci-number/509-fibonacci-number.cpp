class Solution {
public:
    int fib(int n) {
        vector<int>vec(n+1);
        for(int i=0;i<=n;i++){
            if(i==0){
                vec[i]=0;
            }
            else if(i==1){
                vec[i]=1;
            }
            else{
                vec[i]=vec[i-1]+vec[i-2];
            }
        }
        return vec[n];
    }
};
class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0;
        if(x==1) return 1;
        if(x==-1){
            if(n%2==0)return 1;
            else return -1;
        }
        
        double ans = 1;
        if(n < 0){
            if(n == INT_MIN)return 0 ;          
            for(int i =0;i<abs(n);i++){
                ans = 1/x*ans;
            }
        }
        else if(n > 0){
            for(int i = 0;i<n;i++){
                ans = ans * x;
            }
            
        }
        else if(n == 0)return 1;
    
        return ans;
    }
    
};
class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int n = data.size();
        if(data.size()==1){
            if(data[0]<128)return true;
            else return false;
        }
        int i = 0;

        while(i<n){
            if(i == n-1||data[i]<128){
                if(data[i]<128&&i==n-1)return true;
                else if(data[i]<128)i++;
                else if(i = n-1)return false;
            }
            else if(data[i]>=128&&data[i]<192)return false;
            else if(data[i]>=192&&data[i]<=223){
                if(i+1>=n)return false;
                if(data[i+1]<=191&&data[i+1]>=128){
                    i+=2;
                    // if(i==n)return true;
                } 
                else return false;
            }
            else if(data[i]>=224&&data[i]<=239){
                if(i+2>=n)return false;
                if((data[i+1]<=191&&data[i+1]>=128)&&(data[i+2]<=191&&data[i+2]>=128)){
                    i+=3;
                    // if(i==n)return true;
                }
                else return false;
            }
             else if(data[i]>=240&&data[i]<=247){
                if(i+3>=n)return false;
                if((data[i+1]<=191&&data[i+1]>=128)&&(data[i+2]<=191&&data[i+2]>=128)&&(data[i+3]<=191&&data[i+3]>=128)){
                    i+=4;
                    // if(i==n)return true;
                }
                else return false;       
            }
            else if(data[i]>247)return false; 
    }
        return true;
    }
};
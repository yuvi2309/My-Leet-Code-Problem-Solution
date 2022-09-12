class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int l1 = a.size(), l2 = b.size();
        if(l1>l2){
            for(int i=0;i<l1-l2;i++){
                b = '0'+b;
            }
        }
        
        if(l1<l2){
            for(int i=0;i<l2-l1;i++){
                a = '0'+a;
            }
        }  
        char carry = '0';
        int l = max(l1,l2);
        for(int i =l-1;i>=0;i--){
            if(a[i]=='1'&&b[i]=='1'&&carry=='1'){
                    ans = '1'+ans;
                    carry = '1';
                }
            else if(a[i]=='0'&&b[i]=='0'&&carry=='0'){
                    ans = '0'+ans;
                    carry = '0';
                }
            else if((a[i]=='1'&&b[i]=='0'&&carry=='0')||(a[i]=='0'&&b[i]=='1'&&carry=='0')||(a[i]=='0'&&b[i]=='0'&&carry=='1')){
                    ans = '1'+ans;
                    carry = '0';
                }
            else if((a[i]=='1'&&b[i]=='1'&&carry=='0')||(a[i]=='0'&&b[i]=='1'&&carry=='1')||(a[i]=='1'&&b[i]=='0'&&carry=='1')){
                    ans = '0'+ans;
                    carry = '1';
                }                    
            }

        if(carry=='1'){
            ans = '1' + ans;
        }
         return ans; 
        }


                  
    
    
};
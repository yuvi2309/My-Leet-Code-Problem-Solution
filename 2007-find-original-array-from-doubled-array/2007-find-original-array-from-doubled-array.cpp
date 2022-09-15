class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        int n = changed.size();
        if(n%2) return {};
        sort(changed.begin(),changed.end());
        int zeroes=0;
        for(int i = 0;i<n;i++){
            if(changed[i]==0){
                zeroes++;
                if(zeroes%2==0) ans.push_back(0);
            }
            else break;
        }
        if(zeroes%2)return {};
        
        unordered_map<int,int>map;
        for(int i = zeroes;i<n;i++){
            
            map[changed[i]]++;
            
            if(!(changed[i]%2)){
                if(map.count(changed[i]/2) && map[changed[i]/2]){
                    map[changed[i]/2]--;
                    map[changed[i]]--;
                    ans.push_back(changed[i]/2);
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout << 1;
        }
        cout << 1;
        if(ans.size()==n/2)return ans;
        
        return {};                  
    }
};
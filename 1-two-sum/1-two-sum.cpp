class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> map ;
        vector<int> result;

        for(int i=0;i<n;i++){
            int temp = target - nums[i];
            if(map.find(temp) != map.end()){
                result.push_back(map.at(temp)); 
                result.push_back(i);
                return result;
            }
            map[nums[i]] = i;
        }
    return result;
    }
};
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        unordered_map<int, int>mp;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
                mp[nums[i]]++;
        }
        
        
        for(int j = 0; j< nums.size(); j++){
            if(mp[nums[j]] == 1){
                sum+=nums[j];
                cout<<nums[j]<<endl;
            }
        }


        return sum;
    }
};

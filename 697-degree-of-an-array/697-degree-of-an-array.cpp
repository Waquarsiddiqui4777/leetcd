class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
     /*   unordered_map<int ,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }int mx=-1;
        int q;
        for(auto x:mp){
            if(x.second>mx){
                mx=x.second;
                q=x.first;
            };
        }
        int s=0,l=n-1;
          for(int i=0;i<n;i++){
              if(nums[i]==q){
                  s=i;
                  break;
              }}
         for(int i=n-1;i>=0;i--){
              if(nums[i]==q){
                  l=i;
                      break;}}
        return l-s+1;*/
         unordered_map<int, vector<int>> counts;
        for (int i = 0; i < nums.size(); ++i) {
            counts[nums[i]].push_back(i);
        }

        int maxFreq = 0;
        for (auto it = counts.begin(); it != counts.end(); ++it) {
            maxFreq = max(maxFreq, (int)it->second.size());
        }

        int subLen = nums.size();
        for (auto it = counts.begin(); it != counts.end(); ++it) {
            if (it->second.size() == maxFreq) {
                subLen = min(subLen, it->second.back() - it->second[0] + 1);
            }
        }

        return subLen;
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> k;
        int n=nums.size();
        for(int i=0;i<n;i++){
            k.push_back(nums[i]);
            
        }
        sort(k.begin(),k.end());
        int g= (k[n-1]-1)*(k[n-2]-1);
        return g;
    }
};
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
    int i;
    int n =nums.size();
        vector<int>nums1;
        for(i=0;i<n;i++){
if (nums[i]==target)
    nums1.push_back(i);
            }
        return nums1;
    }};
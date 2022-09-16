class Solution {
public:
   void slon(vector<int>nums,int ind,vector<vector<int>>& ans,vector<int> output){
     if(ind==nums.size()){
         ans.push_back(output);
        return;}
    
        
        slon(nums,ind+1,ans,output);
       
           output.push_back(nums[ind]);
        slon(nums,ind+1,ans,output);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        
        slon(nums,0,ans,output);
            return ans;
    }
};
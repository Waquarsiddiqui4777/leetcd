class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    /*    int s=0;
        vector<int> v(2,-1);
        int e=nums.size()-1;
        while(s<e){
                if(nums[s]<target) s++;
            if(nums[e]>target) e--;
               if((nums[e]==target)&&(nums[s]==target))
            {                v.push_back(s);
                v.push_back(e);
            }
        
        }return v;*/  vector<int> ans(2, -1);
    int l = 0, r = nums.size()-1;
    
    // For fist-occurence
    while(l <= r)
    {
        int mid = l + (r-l)/2;
        
        if(nums[mid] == target)
        {
            ans[0] = mid;
            r = mid-1; // Again searches the left side
        }else if(nums[mid] > target)
            r = mid-1;
        else
            l = mid+1;
    }
    l = 0;
    r = nums.size()-1;
    
    // For last occurence
    while(l <= r)
    {
        int mid = l + (r-l)/2;
        
        if(nums[mid] == target)
        {
            ans[1] = mid;
            l = mid+1;  // Again searches the right side
        }else if(nums[mid] > target)
            r = mid-1;
        else
            l = mid+1;
    }
    
    return ans;
    }
};
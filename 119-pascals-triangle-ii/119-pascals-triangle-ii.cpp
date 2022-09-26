class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans;
        for(int i=0;i<rowIndex+1;i++){
            vector<int> v(i+1,1);
        for(int j=1;j<i;j++){
            v[j]=ans[i-1][j-1]+ans[i-1][j];
            
        }ans.push_back(v);
        }
        vector<int> res;
        int k=rowIndex;
        for(int i=0;i<ans[k].size();i++){
            res.push_back(ans[k][i]);
        }return res;
    }
};
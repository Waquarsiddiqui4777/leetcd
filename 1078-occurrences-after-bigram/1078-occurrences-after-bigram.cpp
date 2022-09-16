class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans,v;
        int n=text.size();
        string s="";
        for(int i=0;i<n;i++){
            if(text[i]==' '){
                v.push_back(s);
                s="";}
           else s+=text[i];
        }v.push_back(s);
        for(int i=0;i<v.size()-2;i++){
            if(v[i+1]==second&&v[i]==first)
                ans.push_back(v[i+2]);
        }return ans;
    }
};
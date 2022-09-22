class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        for(i=0;i<n;i++){
            while(j<n && s[j]!=' ') j++;
            reverse(s.begin()+i,s.begin()+j);
            i = j;
           j = j+1;  
        }
        return s;   
    }
};
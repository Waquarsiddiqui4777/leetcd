class Solution {
public:
    int canBeTypedWords(string str, string bad) {    
        int n = str.size();
        unordered_set<char> s;
        for(auto x : bad)
        {
            s.insert(x);}
        int count = 0;
        int i = 0;
        while(i < n)
        {
            int c=1;
            while(i < n && str[i] != ' ')
            {
                if(s.count(str[i]))
                {
                    c=0;
                }   
                i++;
            }
            if(c)
            {
                count++;
            }    
            i++;
        }
        return count;
     /*  int n=str.size();
        int m=bad.size();
        int ans=0;
      unordered_set<char> s;
        for(int i=0;i<m;i++){
             s.insert(bad[i]);}
            for(int i=0;i<n;i++){
                int c=0;
                   if(s.find(str[i])!=s.end())
                       c=1;
                   if(str[i] == ' ' || i == str.size()-1)
            {
                if(c==1) c=0;
                    else ans++;}}
        return ans;*/
    }
};
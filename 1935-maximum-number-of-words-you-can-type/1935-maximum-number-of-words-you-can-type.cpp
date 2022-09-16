class Solution {
public:
    int canBeTypedWords(string str, string bad) {
          
        int n = str.size();
        
        // insert the not working characters into set
        
        unordered_set<char> s;
        
        for(auto x : bad)
        {
            s.insert(x);
        }
        
        int count = 0;
        
        int i = 0;
        
        while(i < n)
        {
            bool flag = true;
            
            while(i < n && str[i] != ' ')
            {
        
                
                if(s.count(str[i]))
                {
                    flag = false;
                }
                
                i++;
            }
            
            
            if(flag)
            {
                count++;
            }
            
            i++;
        }
        
        return count;
    }
};
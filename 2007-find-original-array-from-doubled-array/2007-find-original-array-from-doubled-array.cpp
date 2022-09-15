class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> v;
        unordered_map<int,int> m;
        int n=changed.size();
          if (n % 2 == 1) return {};
      sort(changed.begin(), changed.end());
        for(int i=0;i<n;i++){
            m[changed[i]]++;
        }
          for(int i=0;i<n;i++){
            if(m[changed[i]]==0) continue;
              if(m[changed[i]*2]==0) return {};
              v.push_back(changed[i]);
              m[changed[i]]--;
              m[changed[i]*2]--;
        }return v;
    }
};
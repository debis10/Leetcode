class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int n=strs.size();
            int i,j;
            vector<char>store;
    
            if (n == 0) return "";
    
            if(n==1)
            {
                return strs[0];
            }
    
            for(j=0;j<strs[0].size();j++)
            {
                for(i=0;i<n-1;i++)
                {
                    if(strs[i][j]==strs[i+1][j])
                    {
                       if(i==n-2)
                       {
                        store.push_back(strs[i][j]);
                       }
                    }
                    else
                    return std::string(store.begin(), store.end());
                }
            }
            return std::string(store.begin(), store.end());
        }
    };
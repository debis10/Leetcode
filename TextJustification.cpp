class Solution {
    public:
        vector<string> fullJustify(vector<string>& words, int maxWidth) {
            vector<string> result;
            int n = words.size();
            int i = 0;
    
            while(i<n)
            {
                int lineLen = words[i].size();
                int j = i + 1;
    
                while(j<n && lineLen + words[j].size() + (j - i) <= maxWidth)
                {
                    lineLen += words[j].size();
                    j++;
                }
    
                int totalWords = j - i;
                int totalSpaces = maxWidth - lineLen;
                string line;
    
                if( j == n || totalWords == 1)
                {
                    for (int k =i; k < j; k++)
                    {
                        line += words[k];
                        if (k != j - 1)
                        {
                            line +=' ';
                        }
                    }
                    line += string(maxWidth - line.size(), ' ');
                }
                else
                {
                    int spaces=totalSpaces/(totalWords-1);
                    int extra=totalSpaces%(totalWords-1);
    
                    for(int k=i;k<j;k++)
                    {
                        line+=words[k];
                        if(k!=j-1)
                        {
                            line+=string(spaces+(extra>0?1:0),' ');
                            if(extra>0)
                            {
                                extra--;
                            }
                        }
                    }
                }
                result.push_back(line);
                i=j;
            }
            return result;
        }
    };
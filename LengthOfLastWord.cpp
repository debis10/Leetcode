class Solution {
    public:
        int lengthOfLastWord(string s) {
            
            int n=s.size()-1;
            int count=0;
            while(n>=0)
            {
                
                if(s[n]!=' ')
                {
                 count++;
                }
                
                else
                {
                    if(count!=0 && s[n]==' ')
                    {
                       return count;
                    }
                }
                
                n--;
            }
            return count;
        }
    };
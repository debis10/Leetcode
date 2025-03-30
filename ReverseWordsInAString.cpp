class Solution {
    public:
        string reverseWords(string s) {
    
            string result;
            string word;
            vector<string> words;
            int left=0, right=s.size()-1;
    
            while(left<=right && s[left]==' ')left++;
            while(right>=left && s[right]==' ')right--;
            
    
            while(left<=right)
            {
                if(s[left]!=' ')
                {
                    word+=s[left];
                }
                else if(!word.empty())
                {
                    words.push_back(word);
                    word.clear();
                }
                left++;
            }
            if(!word.empty())
            {
                words.push_back(word);
            }
            for(int i=words.size()-1;i>=0;i--)
            {
                result+=words[i];
                if(i>0)
                {
                    result+=' ';
                }
            }
            return result;
        }
    };
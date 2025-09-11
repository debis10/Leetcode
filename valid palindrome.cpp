class Solution {
public:
    bool isPalindrome(string s) {

        if(s==" ")
            return true;
        
        for(char &c : s)
            if(c>='A' && c<='Z')
                c=c+32;
        
        string result="";

        for(char c : s)
            if((c>='a' && c<='z') || (c>='0' && c<='9'))
                result+=c;

        int i=0,j=result.size()-1;
        while(i<j)
        {
            if(result[i] != result[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
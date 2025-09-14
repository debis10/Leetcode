class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int result=0;
        int maxResult=0;

        while(left<right)
        {
            if(height[left]<height[right])
            {
                result= height[left]*(right-left);
                if(result>maxResult)
                    maxResult=result;
                left++;
            }
            else 
            {
                result= height[right]*(right-left);
                if(result>maxResult)
                    maxResult=result;
                right--;
            }        
        }
        return maxResult;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        int sum=0;
        while(left<right)
        {
        if(numbers[left]+numbers[right]==target)
            return {left+1, right+1};
        else if(target<(numbers[left]+numbers[right]))
            right--;
        else 
            left++;
        }
        return {};
    }
};
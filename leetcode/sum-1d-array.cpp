class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> results;
        int sum = 0;

        for(int i=0; i < nums.size(); i++){
            sum = sum + nums[i];
            results.push_back(sum);
        }
        return results;
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squaredNumbers;

        for(int n : nums){
            int square = n * n;
            squaredNumbers.push_back(square);
        }

        sort(squaredNumbers.begin(), squaredNumbers.end());
        return squaredNumbers;
    }
};
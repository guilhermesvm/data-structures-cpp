class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int size = nums.size();
        int count = 0;

        for(int i=0; i < size; i++){
            int n = nums[i]; 
            if(checkDigit(n)){
                count++;
            }
        }
        return count;
    }

    int checkDigit(int n){
        int tmp = 0;
        while(n > 0){
            n = n / 10;
            tmp++;
        }
        return tmp % 2 == 0;
    }
};
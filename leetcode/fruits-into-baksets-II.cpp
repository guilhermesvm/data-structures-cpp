class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        for(const int& fruit : fruits){
            for(const int& basket : baskets){
                if(fruit <= basket){
                    auto it = find(baskets.begin(), baskets.end(), basket);
                    if(it != baskets.end()){
                        baskets.erase(it);
                        break;
                    }
                }
            }
        }
        return baskets.size();
    }
};
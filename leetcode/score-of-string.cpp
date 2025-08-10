class Solution {
public:
    int scoreOfString(string s) {
        int res = 0;
        
        for(int i=0; i< s.size()-1; i++){
            int asciiFirst = (int)s[i];
            int asciiNext = (int)s[i+1];
            res += abs(asciiFirst - asciiNext);
                
        }
        return res;
    }
};
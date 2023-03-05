class Solution {
public:
    int passThePillow(int n, int time) {
        int pass = n - 1;
        int rounds = time/pass;
        int remPass = time % pass;
        
        if(rounds % 2 == 0)
            return 1 + remPass;
        else
            return n - remPass;  
    }
};
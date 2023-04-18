class Solution {
public:
    int smallestEvenMultiple(int n) {
        if((n&1) != 1) // checking even
            return n;
        else
            return 2*n;
    }
};
class Solution {
public:
    int reverse(int x) {
    long long num = abs(x);
    long long rev_num = 0;
        
    while (num > 0) 
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    
    if(rev_num > INT_MAX || rev_num < INT_MIN) // check 32 bit size
        return 0;
    else if(x < 0) // check negative number
        return 0 - rev_num;
    else
        return rev_num;
    }
};
class Solution {
public:
    string addBinary(string a, string b) {
        int size_a = a.length();
        int size_b = b.length();
        int carry = 0;
        string res = "";
        int i = 0;
        while(i < size_a || i < size_b || carry != 0)
        {
            int x = 0;
            if(i < size_a && a[size_a - i - 1] == '1')
                x = 1;
            int y = 0;
            if(i < size_b && b[size_b - i - 1] == '1')
                y = 1;
            res = to_string((x+y+carry)%2) + res;
            carry = (x+y+carry)/2;
            i++; 
        }
        return res;
    }
};
// Tutorial - https://www.youtube.com/watch?v=ju8iSHeQmx4
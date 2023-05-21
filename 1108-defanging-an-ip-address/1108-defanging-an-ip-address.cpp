class Solution {
public:
    string defangIPaddr(string address) {
        string defangIP;
        for(int i = 0; i < address.length(); i++){
            if(address[i] == '.')
                defangIP += "[.]";
            else
                defangIP += address[i];
        }
        return defangIP;
    }
};
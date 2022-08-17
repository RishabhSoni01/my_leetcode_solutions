class Solution {
public:
    string defangIPaddr(string address) {
        string ip;
        for(char c:address){
            c=='.'?ip+="[.]":ip+=c;
        }
        return ip;
    }
};
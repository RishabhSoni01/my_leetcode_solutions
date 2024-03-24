class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i=num/2;i<=num;i++){
            string x=to_string(i);
            reverse(x.begin(),x.end());
            
            if(i+stoi(x)==num){
                return true;
            }
        }
        return false;
    }
};
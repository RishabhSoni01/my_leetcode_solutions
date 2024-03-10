class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        stack<int> k;
        string res;
        int num=0;

        for(char c:s){
            if(isdigit(c)){
                num = num*10+(c-'0');
            }
            else if(isalpha(c)){
                res.push_back(c);
            }
            else if(c=='['){
                st.push(res);
                k.push(num);
                res = "";
                num=0;
            }
            else if(c==']'){
                string temp=res;
                for(int i=0;i<k.top()-1;++i){
                    res+=temp;
                }
                res = st.top() + res;
                st.pop();
                k.pop();
            }
        }
        return res;
    }
};
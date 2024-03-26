class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        stack<pair<int,int>> st;
        vector<int> ans(n,0);
        int prev_time=0;
        for(auto log :logs){
            size_t pos1=log.find(':');
            size_t pos2=log.find(':',pos1+1);
            int id=stoi(log.substr(0,pos1));
            int timestamp=stoi(log.substr(pos2+1));
            string status=log.substr(pos1+1,pos2-pos1-1);

            if(status=="start"){
                if(!st.empty()){
                    ans[st.top().first]+=timestamp-prev_time;
                }
                st.push({id,timestamp});
                prev_time=timestamp;
            }
            else{
                ans[st.top().first]+=timestamp-prev_time+1;
                st.pop();
                prev_time=timestamp+1;
            }
        }
        return ans;
    }
};
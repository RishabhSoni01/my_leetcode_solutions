class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int maxi=0;
        unordered_map<char,int> mp;
        priority_queue<int> pq;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        for(auto x:mp){
            pq.push(x.second);
        }
        int ans=0;
        while(!pq.empty()){
            vector<int> v;
            for(int i=0;i<=n;i++){
                if(!pq.empty()){
                    v.push_back(pq.top());
                    pq.pop();
                }
            }
            for(int i=0;i<v.size();i++){
                v[i]--;
                if(v[i]>0){
                    pq.push(v[i]);
                }
            }
            if(pq.empty()){
                ans+=v.size();
            }
            else{
                ans+=(n+1);
            }
        }
        return ans;
    }
};
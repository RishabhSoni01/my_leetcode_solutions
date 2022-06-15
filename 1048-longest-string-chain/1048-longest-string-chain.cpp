class Solution {
public:
     bool isPre(string &w1, string &w2)
    {
        int i, j, cnt;
        i = j = cnt = 0;
        while (cnt < 2 && i < w1.size())
        {

            if (w1[i] != w2[j])
            {
                cnt++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        
        return i >= w1.size() && cnt <=1;
    }

    static bool cmp(string &w1, string &w2)
    {

        return w1.size() < w2.size();
    }

public:
    int longestStrChain(vector<string> &words)
    {
        int n = words.size(), ans = 1, i, j;
        sort(words.begin(), words.end(),cmp);
        vector<int> dp(n, 1);
        
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (words[j].size() - words[i].size() > 1)
                    break;

                if (words[j].size() - words[i].size() == 1 && isPre(words[i], words[j]))
                {
                    dp[j] = max(dp[j], 1 + dp[i]);
                    ans = max(ans, dp[j]);
                }
            }
        }

        return ans;
    }
};
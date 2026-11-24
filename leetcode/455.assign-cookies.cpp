/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int c=0,i=0,j=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<g.size()&&j<s.size()){
            if(g[i]<=s[j]){
                c++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }

        return c;
    }
};
// @lc code=end


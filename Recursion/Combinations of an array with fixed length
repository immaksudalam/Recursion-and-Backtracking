class Solution {
public:
    vector<int>v;
    vector<vector<int>>ans;
    int siz;
    int kk;
    void combinations(vector<int>&curr, int pos){
        if(pos == siz){
            if(curr.size() == kk){
                ans.push_back(curr);
            }
            return;
        }
        
        curr.push_back(v[pos]);
        combinations(curr, pos+1);
        
        curr.pop_back();
        combinations(curr, pos+1);
    }
    vector<vector<int>> combine(int n, int k) {
        siz = n;
        kk = k;
        for(int i=1; i<=n; i++) v.push_back(i);
        vector<int>curr;
        combinations(curr, 0);
        
        return ans;
    }
};

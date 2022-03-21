#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
vector<int>v;
int pos =0;
void findpaths(vector<vector<int>> &grid, int i, int j, int m, int n){
    if(i>= m || j>= n)return;
    if(i == m-1 & j== n-1){
        v.push_back(grid[i][j]);
        ans.push_back(v);
        v.pop_back();
        return;
    }
    v.push_back(grid[i][j]);
    findpaths(grid, i+1, j, m, n);
    findpaths(grid, i, j+1, m, n);
    v.pop_back();
}
void solve()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> grid(m, vector<int>(n));
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)cin>> grid[i][j];

    findpaths(grid, 0, 0, m, n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
}
int main()
{
    solve();

}

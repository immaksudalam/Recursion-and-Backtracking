#include <bits/stdc++.h>
using namespace std;
vector<int>ans;
bool flag = true;

void helper(int start, int n){
    if(!flag && start==0) return;
    if(start > n) return;

    flag = false;
    ans.push_back(start);
    for(int i=0; i<=9; i++){
        helper(start*10 + i, n);
    }
}
void solve()
{
    int n; cin>>n;
    helper(0, n);

    for(int i=1; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
    solve();
}

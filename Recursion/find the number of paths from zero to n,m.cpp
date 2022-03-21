#include <bits/stdc++.h>
using namespace std;

int findpath(int x, int y, int n, int m){
    if(x>= n || y>=m) return 0;
    if(x== n-1 && y==m-1) return 1;

    return findpath(x+1, y, n, m)+findpath(x, y+1, n, m);
}
void solve(){
    int n, m;
    cin>>n>>m;
    int No_paths = findpath(0, 0, n, m);

    cout<<No_paths<<endl;
}
int main()
{
    solve();
}

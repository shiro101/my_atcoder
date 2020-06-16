#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> h(n);
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    vector<bool> good(n,true);
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        // a is not larger case
        if(h[a] <= h[b]) good[a] = false;
        // b is not larger case
        if(h[b] <= h[a]) good[b] = false;
    }
    int ans=0;
    for(int i=0; i<n; i++){
        if(good[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}



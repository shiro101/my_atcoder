#include<bits/stdc++.h>
using namespace std;

long long choose2(long long n){
    long long ans;
    ans = n*(n-1)/2;
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        a[i]--;
    }
    vector<int> cnt(n,0);
    for(int i=0; i<n; i++){
        cnt[a[i]]++;
    }
    long long tot;
    tot = 0;
    for(int i=0; i<n; i++){
        tot += choose2(cnt[i]);
    }
    long long ans;
    for(int i=0; i<n; i++){
        ans = tot;
        ans -= choose2(cnt[a[i]]);
        ans += choose2(cnt[a[i]]-1);
        cout << ans << endl;
    }
    return 0;
}



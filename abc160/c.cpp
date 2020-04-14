#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    cin >> k >> n;
    vector<int> a(n);
    vector<int> d(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(i==0){
            d[i] = a[i] + k - a[n-1];
        }else{
            d[i] = abs(a[i]-a[i-1]);
        }
    }
    int sum=0;
    int mx=0;
    for(int i=0; i<n; i++){
        sum = sum + d[i];
        mx = max(mx,d[i]);
    }
    int ans;
    ans = sum - mx;
    cout << ans << endl;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    long long r;
    r = n%k;
    long long tmp;
    long long ans;
    tmp = (long long)abs(r-k);
    ans = min(tmp,r);
    cout << ans << endl;
    return 0;
}



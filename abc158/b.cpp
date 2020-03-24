#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    long long c;
    c = a+b;
    long long ans;
    ans = a*(n/c);
    ans += min(n%c,a);
    cout << ans << endl;
}



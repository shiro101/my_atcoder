#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin >> x;
    int ans=0;
    double res=100;
    double tmp=res;
    long long tmp1;
    while(true){
        ans++;
        tmp += (double)tmp*(0.01);
        tmp1 = floor(tmp);
        if(x<=tmp){
            break;
        }
        tmp = tmp1;
    }
    cout << ans << endl;
}
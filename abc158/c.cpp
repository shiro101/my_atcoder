#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin >> a >> b;
    bool flg=true;

    double tmp8, tmp10;
    int ans8, ans10;
    int i=1;
    int ans;
    while(flg){
        tmp8 = i*0.08e0;
        tmp10 = i*0.10e0;
        ans8 = floor(tmp8);
        ans10 = floor(tmp10);
        if( ans8 == a && ans10 == b){
            ans = i;
            break;
        }else if( ans8 > a && ans10 > b){
            ans = -1;
            break;
        }
        i++;
    }
    cout << ans << endl;
}



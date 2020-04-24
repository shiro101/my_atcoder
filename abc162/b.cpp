#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long sm=0;
    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5==0){
        }else if(i%3==0){
        }else if(i%5==0){
        }else{
            sm = sm + i;
        }
    }
    cout << sm << endl;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int a,b;
    cin >> k;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(i%k==0){
            cout << "OK" << endl;
            return 0;
        }
    }
    cout << "NG" << endl;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int tak, ao;
    tak = a;
    ao = c;
    while(true){
        ao = ao - b;
        if(ao<=0){
            cout << "Yes" << endl;
            break;
        }
        tak = tak - d;
        if(tak<=0){
            cout << "No" << endl;
            break;
        }
    }
    return 0;
}



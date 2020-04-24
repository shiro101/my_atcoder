#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,b,c;
    // e.g. n = 361
    a = n/100; // a = 361/100 = 3.61 = 3
    b = n/10%10; // b = 361/10%10 = 36.1%10 = 36%10 = 6
    c = n%10; // c = 361%10 = 1
    if( a==7 || b==7 || c==7){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}



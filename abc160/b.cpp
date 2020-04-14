#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int c500;
    int c5;
    c500 = ceil(x/500);
    x = x%500;
    c5 = ceil(x/5);
    x = x%5;
    cout << c500*1000+c5*5 << endl;
}



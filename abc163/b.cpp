#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    int sum =0;
    for(int i=0; i<m; i++){
        cin >> a[i];
        sum = sum + a[i];
    }
    if( n-sum >=0 ){
        cout << n-sum << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}



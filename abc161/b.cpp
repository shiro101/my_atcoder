#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if((double)a[i] >= (double)sum/(4*m)){
            cnt++;
        }
    }
    if(cnt >= m ){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int d[100];
    int a[100][100];
    vector<bool> flg(n+1,false);
    for(int i=0; i<k; i++){
        cin >> d[i];
        for(int j=0; j<d[i]; j++){
            cin >> a[i][j];
            flg[a[i][j]] = true;
        }
    }
    int cnt=0;
    for(int i=0; i<n+1; i++){
        if(flg[i]==true){
            cnt++;
        }
    }
    cout << n-cnt << endl;
}



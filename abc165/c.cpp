#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,q;
    cin >> n >> m >> q;
    vector<int> a(q);
    vector<int> b(q);
    vector<int> c(q);
    vector<int> d(q);
    for(int i=0; i<q; i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    long long sm=0;
    vector<int> aa(n);
    aa[0] = 1;
    for(int i=1; i<n; i++){
        aa[i] = 1+aa[i-1];
    }    
    for(int i=0; i<q; i++){
        if(aa[b[i]]-aa[a[i]]==c[i]){
        }else{
            aa.erase(aa.begin() + i);
        }
    }
    cout << accumulate(aa.begin(), aa.end(), 0) << endl;
}



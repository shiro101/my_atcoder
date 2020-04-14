#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin >> n >> x >> y;
    --x, --y;
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        vector<int> dist(n,-1);
        queue<int> q;
        // if distance of v is d, do push
        // lambda def.
        auto push = [&](int v, int d){
            if(dist[v] != -1) return;// if distance is already known, skip
            dist[v] = d;
            q.push(v);
        };
        push(i,0);// initial step
        
        // start BFS
        while(!q.empty()){ // if q is empty, break
            int v = q.front(); q.pop(); // get front value of queue and deleate(pop)
            int d = dist[v];
            // if sent. is for out-of range reference error
            if(v-1>=0) push(v-1,d+1); // you can go to v-1 by d+1
            if(v+1<=n) push(v+1,d+1); // you can go to v+1 by d+1
            // connected case
            if(v==x) push(y,d+1);
            if(v==y) push(x,d+1);
        }
        // dist has min. distance from i-th node to each node
        for(int j=0; j<n; j++) ans[dist[j]]++;
    }
    // for duplication
    // e.g. (1,2), (2,1)
    for(int i=0; i<n; i++) ans[i]/=2;
    for(int i=1; i<=n-1; i++){
        cout << ans[i] << endl;
    }
    return 0;
}



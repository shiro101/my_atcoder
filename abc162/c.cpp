#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int euclid(int small, int big){
    int res = 0;
    if(small > big) swap(&small,&big);

    while(true){
        res = big%small;
        if(res == 0) return small; 
        big = small;
        small = res;
    }
    return 0;
}

int main(){
    int x;
    cin >> x;
    long long sm=0;
    for(int i=1; i<=x; i++){
        for(int j=1; j<=x; j++){
            for(int k=1; k<=x; k++){
                sm = sm + euclid(euclid(i,j),k);
            }
        }
    }
    cout << sm << endl;
    return 0;
}



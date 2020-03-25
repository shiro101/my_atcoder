#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s){ 
    string t;
    t = s;
    reverse(t.begin(),t.end());
    return s==t;
}

int main(){
    string s;
    cin >> s;
    int n;
    n = s.size();
    string t, u;
    t = s.substr(0,(n-1)/2);
    u = s.substr((n+1)/2);
    if( is_palindrome(s) && is_palindrome(t) && is_palindrome(u) ){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}



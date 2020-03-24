#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;//for end
    cin >> s;
    deque<char> q;//for top
    for(int c : s ) q.push_back(c);
    int times;
    cin >> times;
    bool flip=false;
    for(int i=0; i<times; i++){
        int t_type;
        cin >> t_type;
        if(t_type==1){ // if t_type=1, flip = true
            flip=!flip;
        }else{ // if t_type=2
            int f_type; // f_type
            char c;
            cin >> f_type >> c;
            if(flip){
                if(f_type==1){
                    f_type = 2;
                }else if(f_type==2){
                    f_type = 1;
                }
            }
            if(f_type==1){ // if f_type=1,add +c from top
                q.push_front(c);
            }else{ // if f_type=2, add +c at end of s (s is for end)
                q.push_back(c);
            }
        }
    }
    if(flip) reverse(q.begin(),q.end()); //back is read in reverse
    string ans; // for output
    for(char c : q ) ans +=c;
    cout << ans << endl;
    return 0;
}



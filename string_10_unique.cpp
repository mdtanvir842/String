#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="kahfiuaGfak";
    sort(s.begin(),s.end());
    int f=unique(s.begin(),s.end())-s.begin();
    for(int i=0;i<f;i++){
        cout<<s[i];
    }
}

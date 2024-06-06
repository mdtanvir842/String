#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
int main(){
    optimize();
    string s;
    int a=12345;
    s=to_string(a);
    cout<<s<<endl;
    s[1]='7';
    cout<<s<<endl;
    string s1="2454";
    int b=stoi(s1);
    b++;
    cout<<b<<endl;
}

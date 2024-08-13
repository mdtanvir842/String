#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
int main(){
    optimize();
    char s='a';
    bool a=isupper(s);//int also show correct result
    cout<<a<<endl;
    a=islower(s);
    cout<<a<<endl;

    a=isupper(s);
    cout<<a<<endl;
    a=islower(s);
    cout<<a<<endl;
    a=isspace(s);
    cout<<a<<endl;
    s=' ';
    a=isspace(s);
    cout<<a<<endl;
    s='a';
    s=toupper(s);
    cout<<s<<endl;
    s='B';
    s=tolower(s);
    cout<<s<<endl;
    string s="abcd";
    cout<<(char)toupper(s[0])<<endl;

}

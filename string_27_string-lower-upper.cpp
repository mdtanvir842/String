#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcd";
    string s1="BVUG";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    cout<<s<<endl;
    cout<<s1<<endl;
}

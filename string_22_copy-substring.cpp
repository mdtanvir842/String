#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
int main(){
    optimize();
    string s1="Md Tanvir ";
    string s2="Hey Alam hey";
    copy(s2.begin()+4,s2.begin()+8,back_inserter(s1));
    cout<<s1<<endl;

}

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
int main(){
    optimize();
    string s1="abababababababababa";
    s1.erase(remove(s1.begin(),s1.end(),'a'),s1.end());
    cout<<s1;

}

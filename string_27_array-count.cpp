#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[]={"Geeks","For","Geeks"};
    int cnt=0;
    for(auto u:s){
        int n=count(begin(s),end(s),u);
        if(n==2){
            cnt++;
        }
    }
    cout<<cnt;
}

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
int main(){
    optimize();
    vector<string>v={"Tanvir","Emon","Tanvir","Alam","Emon","Tanvir","Rafi","Md","Rafi"};
    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();
    for(int i=0;i<sz;i++){
        cout<<v[i]<<endl;
    }
}

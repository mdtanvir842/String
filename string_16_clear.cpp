#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
int main(){
    optimize();
    vector<string>v;
    v.push_back("My");
    v.push_back("name");
    v.push_back("is");
    v.push_back("Md");
    v.push_back("ab");
    v.push_back("aa");
    v.push_back("aaa");

    v.push_back("Tanvir");
    v.push_back("Alam");
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<endl;
    }
    cout<<"HI"<<endl;
    v.clear();
    for(auto i:v){
        cout<<i<<endl;
    }
    //another
    string s="Abcdge";
    cout<<s<<endl;
    s.clear();
    cout<<s<<endl;
}

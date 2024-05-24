#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Tanvir";
    string s1="tanvir";
    if(s==s1){
        cout<<"matched"<<endl;
    }
    else{
        cout<<"not matched"<<endl;
    }
    //another
    string v="Tanvir";
    string v1="Tanvir";
    if(v==v1){
        cout<<"matched"<<endl;
    }
    else{
        cout<<"not matched"<<endl;
    }
    //another
    string t="abcde";
    string t1="fghijab";
    if(t==t1){
        cout<<"matched"<<endl;
    }
    else{
        cout<<"not matched"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++){
    string s;
    cin>>s;
    n=next_permutation(s.begin(),s.end());
    if(n==0){
        cout<<"no answer"<<endl;
    }
    else{
        cout<<s<<endl;
    }

    }


}

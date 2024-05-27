#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="Md Tanvir Alam";
    string s2=s1;
    reverse(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"Yes Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    //again
    string s3="abbba";
    string s4=s3;
    reverse(s4.begin(),s4.end());
    if(s3==s4){
        cout<<"Yes Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
}

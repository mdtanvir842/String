#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="kahfxiaauaGfak";
    int x=max_element(s.begin(),s.end())-s.begin();
    int y=min_element(s.begin(),s.end())-s.begin();
    cout<<s[x]<<endl;
    cout<<s[y]<<endl;
    string s1="kpwajgopiq";
    cout<<*max_element(s1.begin(),s1.end())<<endl;
    cout<<*min_element(s1.begin(),s1.end());
}

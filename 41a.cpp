#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s>>s1;
    reverse(s.begin(),s.end());
    if(s1==s)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if((s1[i]=='1'&&s2[i]=='0')||(s1[i]=='0'&&s2[i]=='1'))
            cout<<"1";
        else
            cout<<"0";
    }
    cout<<endl;

}

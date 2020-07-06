#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n>>s;
    set<char>st;
    for(int i=0; i<s.length(); i++)
    {
        s[i]=toupper(s[i]);
        st.insert(s[i]);
    }
    if(st.size()>=26)
        cout<<"YES"<<endl;
    else
        cout<<"NO\n";

}

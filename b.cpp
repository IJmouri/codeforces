#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s;
    int i,n,j,c=0;
    cin>>n;
    cin>>s1>>s2;

    for(i=0; i<s1.length(); i++)
    {
        for(j=i+1; j<s1.length(); j++)
        {
            if(s1[i]!=s1[j])
            {
                if(s2[i]!='1'||s2[j]!='1')
                {
                    c++;
                }
            }
        }
    }
    cout<<c<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c,d,e,f;
    int n,i,t,j,co=0;
    // printf("%c",98-1);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        co=0;
        for(i=0,j=n-1; i<n/2; i++,j--)
        {


                c=s[i]-1;
                d=s[i]+1;
                e=s[j]-1;
                f=s[j]+1;

            if(c==e)
            {
                co++;

            }
            else if(c==f)
            {
                co++;
                            }
            else if(d==e)
            {
                co++;

            }
            else if(d==f)
            {
                co++;

            }
        }
        if(co==n/2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

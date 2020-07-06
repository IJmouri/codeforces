#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ta,tb,fa,fb,n,h,k,s,s1,i;
    cin>>n>>h>>a>>b>>k;
    for(i=1;i<=k;i++)
    {
        cin>>ta>>fa>>tb>>fb;
        s=abs(tb-ta)+abs(fa-a)+abs(fb-a);
        s1=abs(tb-ta)+abs(fa-b)+abs(fb-b);

        if(ta==tb)
            cout<<abs(fa-fb)<<endl;
        else if(a<=fa&&fa<=b)
            cout<<abs(ta-tb)+abs(fa-fb)<<endl;
        else
        cout<<min(s,s1)<<endl;

    }
}

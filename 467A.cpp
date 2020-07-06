#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c=0,i,d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        d=b-a;
        if(d>=2)
            c++;
    }
    cout<<c<<endl;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,max=-1,i,s=0,a,b,p,c,d,t;
    cin>>m;
    vector<int>v;
    for(i=1; i<=m; i++)
    {
        cin>>a>>b>>c>>d;
        s=c+d+b+a;
        v.push_back(s);
    }
    t=v[0];
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        if(v[i]==t)
            {
                cout<<i+1<<endl;
                break;
        }
    }


}

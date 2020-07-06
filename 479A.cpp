#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
using namespace std;
int main()
{
    int a,c,b,s;
    sf("%d%d%d",&a,&b,&c);
    vector<int>v;
    s=a+b+c;
    v.pb(s);
    s=a*b*c;
    v.pb(s);
    s=a*(b+c);
    v.pb(s);
    s=a+(b*c);
    v.pb(s);
    s=(a+b)*c;
    v.pb(s);
    s=a*b+c;
    v.pb(s);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    pf("%d\n",v[0]);
}

#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    long long int x,n,s,m,d1,d2,d3;
    cin>>d1>>d2>>d3;
    vector<int>v;
    v.pb(2*d1+2*d2);
    v.pb(2*d1+2*d3);
    v.pb(2*d3+2*d2);
    v.pb(d1+d2+d3);
    vector<int>:: iterator it;
    it=min_element(v.begin(),v.end());
    cout<<*it<<endl;
}

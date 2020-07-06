#include<bits/stdc++.h>
using namespace std;
int ar[3009];
int br[3009];
vector< pair<int, int> > v;
int main()
{
    int i,j,s=0,n,m,a,b;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(b,a));
        ar[a]+=1;
        br[a]+=1;
    }
    sort(ar,ar+n+1);
    reverse(ar,ar+n+1);
    for(i=0;i<n;i++)
    {
        if(br[i]==ar[0])
        {
            x=i;
            break;
        }
    }
    cout<<br[1]<<" "<<ar[0];
    if(br[1]==ar[0]&&ar[0]!=ar[1])
        cout<<"0\n";

    else
    {
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            if(v[i].second!=1)
            {
                s+=v[i].first;
                ar[]
                br[1]+=1;
                if(br[1]>ar[0])
                {
                    cout<<s<<endl;
                    break;
                }
            }
        }
    }
}

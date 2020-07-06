#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k,j,m,n,q,x,y,i,l;
int main()
{
    cin>>n>>q;

    for(i=1; i<=q; i++)
    {
        cin>>x>>y;
        if((x+y)%2==0)
        {

            l=ceil((n*n)/2.0)-ceil(((n-x)*n)/2.0)-floor((n-y)/2.0);
            printf("%I64d\n",l);

        }
        else
        {
            l=(n*n)-floor(((n-x)*n)/2.0)-floor((n-y)/2.0);
            printf("%I64d\n",l);

        }
    }

}

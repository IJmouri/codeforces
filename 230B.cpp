#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll v[100005];
int prime[3000000] , nPrime;
int mark[10000002];
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}

int main()
{
    int n,i;
    sieve(1000000);
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(i=0; i<n; i++)
    {
        ll x= sqrt(v[i]);
        long long int y=x*x;

        if(v[i]==y&&mark[x]==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

}

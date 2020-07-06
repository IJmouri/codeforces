#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
using namespace std;
long long int s,i,n;
int main()
{
 //   long long int s,i,n;
    sf("%I64d",&n);
    if(n%2==0)
        pf("%I64d\n",n/2);
    else
        pf("%I64d\n",-((n/2)+1));
}

#include<bits/stdc++.h>
using namespace std;
long long int n,p;
int main()
{

    cin>>n>>p;

    if(p<=ceil(n/2.0))
        cout<<p*2-1<<endl;
    else
    {
        if(n%2==1)
        cout<<p*2-n-1<<endl;
    else
        cout<<p*2-n<<endl;
    }

}

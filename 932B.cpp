#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,p,count,a,i,j,l,k,r,t;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        p=1;
        scanf("%d%d%d",&l,&r,&k);
        for(i=l; i<=r; i++)
        {
            a=i;
            p=1;
            while(1)
            {
                p=1;
                while(a!=0)
                {
                    x=a%10;
                    a=a/10;
                    y=a%10;
                    if(x==0)
                        x=1;
                    if(y==0)
                        y=1;
                    p=p*x*y;
                    a=a/10;

                }

                if(p==k)
                {
                    count++;

                    break;

                }
                if(p>9)
                    a=p;
                else
                    break;
            }


        }

        printf("%d\n",count);
    }
}

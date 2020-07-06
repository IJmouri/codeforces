#include<bits/stdc++.h>
using namespace std;
int prr[1000005],pr[1000005][14],ay,q,r1,u,v,s,w,z,q1,c,t,l,r,k,i,p,x,y,a;
int product()
{
    for(i=1; i<=1000000; i++)
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
            if(p>9)
                a=p;
            else
                break;
        }
        if(p==1)
        pr[i][p]=q++;
        else if(p==2)
        pr[i][p]=r1++;
        else if(p==3)
        pr[i][p]=s++;
        else if(p==4)
        pr[i][p]=u++;
        else if(p==5)
        pr[i][p]=v++;
        else if(p==6)
        pr[i][p]=w++;
        else if(p==7)
        pr[i][p]=z++;
        else if(p==8)
        pr[i][p]=ay++;
        else if(p==9)
        pr[i][p]=q1++;
        prr[i]=p;

    }

}
int main()
{
    product();
    int x1=0,y1=0;
    scanf("%d",&t);

    while(t--)
    {
        x1=0,y1=0;
        scanf("%d%d%d",&l,&r,&k);
        for(int j=l-1;j>=1;j--)
        {
            if(prr[j]==k)
            {

             x1=pr[j][k]+1;
            break;}
        }
        for(i=r; i>=l; i--)
        {
            if(prr[i]==k)
            {
                    y1=pr[i][k]+1;
                break;
            }
        }
        printf("%d\n",y1-x1);
    }
}

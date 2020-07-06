#include<bits/stdc++.h>
using namespace std;
int r[10];
int main()
{
    int i,n,a,x;
    set<int>st;
    cin>>a;
    n=a;
    n=n+1;
    a=n;
    r[0]=n%10;
    st.insert(r[0]);
    n=n/10;
    r[1]=n%10;
    st.insert(r[1]);
    n=n/10;
    r[2]=n%10;
    st.insert(r[2]);
    n=n/10;
    r[3]=n%10;
    st.insert(r[3]);
    x=st.size();
    st.clear();
    if(r[0]==r[1]||r[0]==r[2]||r[0]==r[3]||r[1]==r[2]||r[1]==r[3]||r[2]==r[3])
    {
        while(x!=4)
        {

            n=a+1;
            a=n;
            r[0]=n%10;
            st.insert(r[0]);
            n=n/10;
            r[1]=n%10;
            st.insert(r[1]);
            n=n/10;
            r[2]=n%10;
            st.insert(r[2]);
            n=n/10;
            r[3]=n%10;
            st.insert(r[3]);
            x=st.size();
            st.clear();
        }
        printf("%d\n",a);
    }
    else
    {
        printf("%d\n",a);
    }
}


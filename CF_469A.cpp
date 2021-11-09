#include<bits/stdc++.h>
using namespace std;

map<int,int>m;

int main()
{
    int n;
    int flag=0;
    cin>>n;

    int p,q,i,a[10000],b[10000];
    cin>>p;

    for(i=1;i<=p;i++)
    {
        cin>>a[i];
        m[a[i]]=1;
    }

    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>b[i];
        m[b[i]]=1;
    }

    for(i=1;i<=n;i++)
    {
        if(m[i]==0)
        {
            flag=1;
        }

    }

    if(flag==1)
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    else{
        cout<<"I become the guy."<<endl;

    }






}

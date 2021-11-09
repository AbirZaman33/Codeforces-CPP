#include<bits/stdc++.h>
using namespace std;

map<string,int>m;

int main()
{
    int a[100000];
    int n,i;
    string s;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(m[s]==0)
        {
            cout<<"OK"<<endl;
            m[s]++;

        }

        else{
            cout<<s<<m[s]<<endl;
            m[s]++;
        }

    }
}

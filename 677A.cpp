#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    int i,n,h,ok_level=0,high_level=0;

    cin>>n>>h;

    int arr[n];

    for(i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]<=h){
            ok_level++;
        }
        else{
            high_level=high_level+2;
        }

    }
    cout<<ok_level+high_level<<endl;

}

*/

int main()
{
    int n,h,i,a,sum=0;
    cin>>n>>h;
    for(i=1;i<=n;i++){
        cin>>a;

        if(a>h){
            sum++;
        }
        sum++;
    }
    cout<<sum<<endl;

}



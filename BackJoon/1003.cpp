#include <iostream>
using namespace std;


int main()
{
    int n,t;
    cin>>t;
    int arr[41][2];
    arr[0][0]=1;
    arr[0][1]=0;
    arr[1][0]=0;
    arr[1][1]=1;
for(int i=0;i<t;i++)
{
    cin>>n;
    if(n==0)
        cout<<arr[0][0]<<" "<<arr[0][1]<<endl;
    else if(n==1)
        cout<<arr[1][0]<<" "<<arr[1][1]<<endl;
    else
    {
        for(int k=2;k<n+1;k++)
        {
            arr[k][0]=arr[k-1][0]+arr[k-2][0];
            arr[k][1]=arr[k-1][1]+arr[k-2][1];
        }
        cout<<arr[n][0]<<" "<<arr[n][1]<<endl;
    }
}
    system("pause");

    return 0;
}

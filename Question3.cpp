#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        cin>>arr[i];

        cin>>m;
        int arr2[m];

        for(int i=0;i<m;i++)
        cin>>arr2[i];

        int i=0,j=0,found=0;
        while(i<n&&j<m)
        {
           if(arr[i]<arr2[j])
           i++;
           else if(arr[i]>arr2[j])
           j++;
           else
           {
               found++;
           cout<<arr[i]<<" ";
           i++;
           j++;
           }
        }
        cout<<endl;
       if(found==0)
       cout<<"No common element!"<<endl;
    }
}
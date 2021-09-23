#include<iostream>
#include<algorithm>
using namespace std;

void find_duplicates(int arr[],int N)
{
    int res=0;
   for(int i=0;i<N;i++)
   {
       res = count(arr,arr+N,arr[i]);
       if(res>1)
       {
       cout<<"YES";
       break;
       }
   }
    if(res<=1)
       cout<<"NO";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+N);
        find_duplicates(arr,N);
    }
}
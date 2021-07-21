#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int copies(int arr[],int N,int key)
{
    int *low = lower_bound(arr,arr+N,key);
    if(low == (arr+N)|| *low!=key)
    return 0;

    int *high = upper_bound(low,arr+N,key);

    return high-low;
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
        int key;
        cin>>key;
        int res = copies(arr,N,key);
        (res==0) ? cout<<"Element not found! " : cout<<"No. of copies = "<<res;
    }
    
}

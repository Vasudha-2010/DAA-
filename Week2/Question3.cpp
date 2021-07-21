#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int arr[],int low,int high,int key)
{
    if(high>=low)
    {
         int mid = low + (high - low)/2;
        if (key == arr[mid])
            return mid;
        if (key > arr[mid])
            return binarySearch(arr, (mid + 1), high, key);
        else
            return binarySearch(arr, low, (mid -1), key);
    }
    return -1;
}

int pairs_count(int arr[],int N,int key)
{
   int count=0,i;
   sort(arr,arr+N);

   for(i=0;i<N-1;i++)
   {
       if(binarySearch(arr,i+1,N-1,arr[i]+key)!=-1)
       count++;
   }
   return count;
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
        cout<<"Number of pairs : "<<pairs_count(arr,N,key);
    }
}
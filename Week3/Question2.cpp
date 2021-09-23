#include<iostream>

using namespace std;

int swaps=0,shifts=0;

void selection_sort(int arr[],int N)
{
   for(int i=0;i<N-1;i++)
   {
       int min = i;
       for(int j=i+1;j<N;j++)
       {
           if(arr[j]<arr[min])
           {
           min=j;
           swaps++;
           }
       }
       swap(arr[min],arr[i]);
       shifts++;
   }
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
        selection_sort(arr,N);
        for(int i=0;i<N;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons : "<<swaps<<endl;
        cout<<"Shifts : "<<shifts<<endl;
    }
}
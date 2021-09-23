#include<iostream>

using namespace std;

int shifts=0,swaps=0;
void insertion_sort(int arr[],int N)
{
    int i, key, j;
    for (i = 1; i < N; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            swaps++;
            arr[j + 1] = arr[j];
            shifts++;
            j = j - 1;
        }
        arr[j + 1] = key;
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
        insertion_sort(arr,N);
        for(int i=0;i<N;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons : "<<swaps<<endl;
        cout<<"shifts : "<<shifts<<endl;
    }
}
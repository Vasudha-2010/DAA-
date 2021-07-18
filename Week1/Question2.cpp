#include<iostream>
using namespace std;

int count=0;
int binarySearch(int arr[], int l, int r, int x)
{
    count++;
    if (r >= l) {
        int mid = l + (r - l) / 2;
         if (arr[mid] == x)
            return mid;
    if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
    return binarySearch(arr, mid + 1, r, x);

    }
return -1;
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
        int result = binarySearch(arr, 0, N - 1, key);
        (result == -1) ? cout << "Not present "<<count: cout << "Present"<<count;
        return 0;
       
    }
}
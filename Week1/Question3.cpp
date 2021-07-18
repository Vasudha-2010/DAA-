#include <bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[], int x, int n)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
     while (arr[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    
    if (arr[prev] == x)
        return prev;
 
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
        int index = jumpSearch(arr, key, N);
        (index==-1)? cout<<"Not present ": cout<<"Present ";
     
    }
    return 0;
}
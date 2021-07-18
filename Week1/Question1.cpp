#include<iostream>
using namespace std;

int main()
{
    int t,found=0; 
    cin>>t;      // no. of test cases
    while(t--)
    {
        int N;     // size of the array
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        int key;     // element to be searched for
        cin>>key;
        int j;
        
        for(j=0;j<N;j++)
        {
            if(arr[j]==key)
            {
            found++;
            cout<<"\nPresent "<<j+1;
            }
        }
        if(found==0)
        cout<<"\nNot present "<<j;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int t;
    cout<<"Enter the number of test cases : ";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cout<<"\nEnter the size of the array : ";
        cin>>n;
        int arr[n];
        cout<<"Enter the array elements : ";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cout<<"Enter the element to be searched for : ";
        cin>>key;
        int found=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                found++;
                cout<<"Element found at position : "<<i+1;
                break;
            }
        }
        if(found==0)
        {
            cout<<"Element not found!!";
        }
    }
    return 0;
}
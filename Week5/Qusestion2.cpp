#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binSearch(int arr[],int l,int r,int t)
{
    while(r>l)
    {
        int mid=(l+(r-l))/2;
        if(arr[mid]==t)
        {
            return arr[mid];
        }
        if(arr[mid]<t)
        binSearch(arr,mid+1,r,t);
        else
        binSearch(arr,l,mid-1,t);
    }
    return -1;
}

int main()
{
    /*int TC;
    cin>>TC;
    while(TC--)
    {*/
        int n;
        cin>>n;
        int arr[n];
       
        for(int i=0;i<n;i++)
        cin>>arr[i];

         int key;
        cin>>key;

        int pairs=0;
        for(int i=0;i<n;i++)
        {
            int a=arr[i];
            int b= binSearch(arr,i+1,n-1,key-a);
            if(b!=-1)
            {
                pairs++;
            cout<<a<<" "<<b<<", ";
            }
        }
        cout<<endl;

        if(pairs==0)
        cout<<"No such pair !"<<endl;
    //}
}
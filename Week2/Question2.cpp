#include<iostream>

using namespace std;

void sequence(int arr[],int N)
{
for(int i=N-1;i>=0;i--)
        {
            int j=0;
            int k=i-1;

            while(j<k)
            {
                if(arr[i]==arr[j]+arr[k])
                {
                    cout<<"The indices are : "<<j<<" "<<k<<" "<<i;
                    return;
                }
                else if(arr[i]>arr[j]+arr[k])
                {
                    j+=1;
                }
                else
                k-=1;
            }
           
        }
         cout<<"No sequence exists !";
    
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
        sequence(arr,N);
    }
}
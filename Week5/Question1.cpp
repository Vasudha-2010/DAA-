#include <bits/stdc++.h>
using namespace std;
 

void findDuplicate(char arr[], int n)
{
    int countArr[26]={0}, i;
 
    for (i = 0; i < 26; i++)
        countArr[arr[i]-97]++;

    int max=0,j=0;
    char max_char;
    for (i = 0; i < 26; i++) {
 
        if (countArr[i] > max) {
            max=countArr[i];
            j=i;;
        }
    }

    if(max>0)
    {
    max_char=j+97;
    cout<<max_char<<" - "<<max<<endl;
    }
    else
    cout<<"No duplicate present "<<endl; 
}
 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;

    char arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    findDuplicate(arr, n);
    return 0;
    }
}
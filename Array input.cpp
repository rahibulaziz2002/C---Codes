
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter you array size";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your entered values are"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

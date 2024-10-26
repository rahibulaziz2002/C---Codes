+
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your Array size";
    cin>>n;
    int arr[n];
    cout<<"Enter your Elements";
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your inputed elements are:";
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

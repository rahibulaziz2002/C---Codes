#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter array size";
   cin>>n;
   int arr[n];
   cout<<"Enter array elements";
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=n-1;i>=0;i--)
   {
       cout<<arr[i]<<endl;
   }
}

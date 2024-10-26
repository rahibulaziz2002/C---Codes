#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter array size";
   cin>>n;
   if(n<=0)
   {
       cout<<"invalid array";
   }
   int arr[n];
   cout<<"Enter array elements";
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int sum=arr[0];
   for(int i=1;i<n;i++)
   {
       sum+=arr[i];
   }
   double average=double (sum)/n;
   cout<<"Average of array is:"<<average;
}


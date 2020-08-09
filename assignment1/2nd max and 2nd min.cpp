//to find 2nd max and 2nd min of an array
#include<iostream>
using namespace std;
int main()
{
 int arr[10],n,i,j,temp;
 cout<<"enter size of array:";
 cin>>n;
 cout<<"enter elements of array";
  for(i=0;i<n;i++)
   cin>>arr[i];

    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
      if(arr[i] < arr[j])
        {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
     }
 cout<<"second largest no:" <<arr[1];
 cout<<"\nsecond smallest no:" <<arr[n-2];
 return 0;
}

//to find greatest of three no.
#include<iostream.h>
int main()
{
 float n1,n2,n3;
 cout<<"enter three no.s";
 cin>>n1>>n2>>n3;
if(n1>=n2 && n1>=n3)
{
 cout<<"largest no:" <<n1;
}
if(n2>=n1 && n2>=n3)
{
 cout<<"largest no:" <<n2;
}
if(n3>=n1 && n3>=n2)
{
 cout<<"largest no:" <<n3;
}
return 0;
}

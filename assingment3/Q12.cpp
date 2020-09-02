#include<iostream>
#include<algorithm>
using namespace std;
void stringReverse(string &str,int a,int b){
if(a<b){
        swap(str[a],str[b]);
stringReverse(str,a+1,b-1);}
}
int main()
{
    string a ;
    cout<<"Enter your string: "<<endl;
    cin>>a;
    cout<<"Reversed string is " <<endl;
    int x=0;
    int y=a.length();
    stringReverse(a,x,y-1);
    cout<<a;
    return 0;
}

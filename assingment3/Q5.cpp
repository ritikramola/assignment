#include<iostream>
#include<iomanip>
using namespace std;
class Garage{
public:double hours;
void input(){
cin>>hours;}
double hour(){
return hours;}
double calculateCharges(){
    double c;
    int i;
    if(hours<=3){
        c=2.00;
    }
    if(hours>3){c=2.00;
            int v=hours-3;
        for(i=0;i<v;i++){
          { c=c+.50;}
    if(c>10.00){c=10.00;}
        }
    }
    return c;}

};int main(){
Garage a,b,c;
cout<<"Enter hours of 1st person: "<<endl;
a.input();
cout<<"Enter hours of 2nd person: "<<endl;
b.input();
cout<<"Enter hours of 3rd person: "<<endl;
c.input();
cout<<"Car   "<<"                 "<<"Hours"                   <<"             "<<"Charges"<<endl;
cout<<"1     "<<"                 "<<a.hour()                  <<"                 "<<a.calculateCharges()<<endl;
cout<<"2     "<<"                 "<<b.hour()                  <<"                 "<<b.calculateCharges()<<endl;
cout<<"3     "<<"                 "<<c.hour()                  <<"                 "<<c.calculateCharges()<<endl;
cout<<"total "<<"                 "<<a.hour()+b.hour()+c.hour()<<"                 "<<a.calculateCharges()+b.calculateCharges()+c.calculateCharges();
}

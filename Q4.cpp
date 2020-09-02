#include<iostream>
using namespace std;
class Sphere{
public: double  r;
       void input(){cout<<"Enter the radius of the sphere: "<<endl;
       cin>>r;}
       double pow(double  x,double  y){
       int xr=1;
      while(y!=0){
        xr=xr*x;
        y--;
       }
       return xr;}
       inline double sphereVolume(){double b=(4.0/3.0)*3.14159*pow(r,3);
       return b;}
};
int main(){
     Sphere s;
     s.input();
     cout<<"The volume of the sphere is: "<<s.sphereVolume()<<endl;}

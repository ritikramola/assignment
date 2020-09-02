
#include<iostream>
#include<string.h>
using namespace std;
class Invoice{
private: string pnmbr;
string pdescription;
int qty;
int price;
public:Invoice(string n,string d,int q,int p){
pnmbr=n;
pdescription=d;
qty=q;
price=p;
if(q>0){qty=q;}
else{cout<<"ERROR: invalid qty "<<endl;
     qty=0;}
    if(p>0){price=p;}
else{cout<<"ERROR: invalid price "<<endl;
     price=0;}
     }
void setPnmbr(string a){
pnmbr=a;}
void setPdescription(string b){
pdescription=b;}
void setQty(int c){
     qty=c;}
void setPrice(int d){
    price=d;
}
string getPnmbr(){
return pnmbr;}
string getPdescription(){
return pdescription;}
int getQty(){
return qty;}
int getPrice(){

return price;}
int getInvoiceAmount(){
    int amt;
    amt=qty*price;
    return amt;
}
};
int main()
{
    Invoice o1("AK4567","Very important and useful part ",4,5000);
    cout<<"The Part number is "<<o1.getPnmbr()<<endl;
    cout<<"The Part description is "<<o1.getPdescription()<<endl;
    cout<<"Number of parts are "<<o1.getQty()<<endl;
    cout<<"The Price per item is "<<o1.getPrice()<<" rupees"<<endl;
    cout<<"The total amount of the parts are "<<o1.getInvoiceAmount()<<" rupees"<<endl;
    //for testing negative price and qty
    Invoice o2( "SHIRO4567","Essential part ",-10,-78955);
    cout<<"The Part number is "<<o2.getPnmbr()<<endl;
    cout<<"The Part description is "<<o2.getPdescription()<<endl;
    cout<<"Number of parts are "<<o2.getQty()<<endl;
    cout<<"The Price per item is "<<o2.getPrice()<<" rupees"<<endl;
    cout<<"The total amount of the parts are "<<o2.getInvoiceAmount()<<" rupees"<<endl;

}

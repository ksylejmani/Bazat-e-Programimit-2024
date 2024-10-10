#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    short int xa,ya,xb,yb; //2+2+2+2=8 byte
    double de; // 8 byte
    int dm;// 4 byte
    long long int sd; // 8 byte
    // Ne total 28 byte

    cout<<"Cakto pikën A (xa,ya): ";
    cin>>xa>>ya;
    cout<<"Cakto pik\x89n B (xb,yb): ";
    cin>>xb>>yb;

    de=sqrt(pow(xa-xb,2)+pow(ya-yb,2)); 
    dm=abs(xa-xb)+abs(ya-yb);
    sd= abs(xa-xb)*abs(ya-yb);

    cout<<"Distanca Euklidiane: "
    <<setprecision(3)
    <<fixed
    <<setw(10)
    <<setfill('*')
    <<left
    <<de<<"\n";
    cout<<"Distanca Menhatane: "<<dm<<endl;
    cout<<"Sip\x89rfaqja e drejtk\x89nd\x89shit: "<<sd<<endl;

    return 0;
}
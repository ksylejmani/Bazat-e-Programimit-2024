#include<iostream>
#include<math.h>
using namespace std;
int main(){
    short int a,b,c,p,s,sip;
    float x1,x2;

    cout<<"Cakto vleren p\x89r a: ";
    cin>>a;
    cout<<"Cakto vleren për b: ";
    cin>>b;
    cout<<"Cakto vleren per c: ";
    cin>>c;

    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    p=a+b+c;
    s=(float)p/2;
    sip=sqrt(s*(s-a)*(s-b)*(s-c));



    cout<<"Vlera x1: "<<x1<<"\n";
    cout<<"Vlera x2: "<<x2<<endl;
    cout<<"Perimetri: "<<p<<endl;
    cout<<"Siperfaqeja: "<<sip<<endl;

    return 0;
}
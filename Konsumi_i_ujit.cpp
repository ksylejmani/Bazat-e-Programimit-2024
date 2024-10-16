#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,t;
    float mi;
    string kf;
    cout<<"Jepe konsumin e ujit per tre dite: ";
    cin>>x1>>x2>>x3;
    t=x1+x2+x3;
    mi=t/3.0; // ose mi=(float)t/3;
    if(mi<=100)
        kf="Furnizim i Ulet";
    else if(mi<=200)
        kf="Furnizim i Mesem";
    else
        kf="Furnizim i Larte";
    cout<<"Konsumi total i ujit eshte "<<t<<endl;
    cout<<"Mesatarja e konsumit te ujite eshte "<<mi<<endl;
    cout<<"Kategoria e furnizimit eshte "<<kf<<endl;
    return 0;
}
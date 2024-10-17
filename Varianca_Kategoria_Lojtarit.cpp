#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1,x2,x3;
    double sigma2,mi;
    string kl;
    cout<<"Shkruaj pik\x89t p\x89r tre dit\x89: ";
    cin>>x1>>x2>>x3;
    mi=(x1+x2+x3)/3.0; // ose  mi=(double)(x1+x2+x3)/3;
    sigma2=(pow(x1-mi,2)+pow(x2-mi,2)+pow(x3-mi,2))/3;
    if(sigma2<=5)
        kl="Konsistent";
    else if(sigma2<=10)
        kl="Mesatar";
    else
        kl="Inkonsistent";
    cout<<"Varianca: "<<sigma2<<endl;
    cout<<"Kategoria e lojtarit: "<<kl<<endl;

    return 0;
}
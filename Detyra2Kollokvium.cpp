#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Jepni vleren e a-se: ";
    cin>>a;
    c=2*a;
    b=2*(a+c);
    cout<<"Heresi b dhe c: "<<b/((double)c)<<endl;
    // Cila do të jetë dalja për vlerën e a = 4?
    cout<<"c: "<<c<<endl;
    cout<<"b: "<<b<<endl;
    return 0;
}
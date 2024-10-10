#include<iostream>
using namespace std;
int main(){
    int v,jv,p,gj;
    int r;
    float m;
    cout<<"Sa eshte vleresimi per komunikim verbal: ";
    cin>>v;
    cout<<"Sa eshte vlersimi per komunikimin jo verbal: ";
    cin>>jv;
    cout<<"Sa eshte vlersimi per paraqitje: ";
    cin>>p;
    cout<<"Sa eshte vlersimi per gjestikulacione: ";
    cin>>gj;
    r=v+jv+p+gj;
    m=(float)r/4;
    cout<<"Vleresimi total: "<<r<<endl;
    cout<<"Vleresimi mesatare: "<<m<<endl;
    return 0;
}
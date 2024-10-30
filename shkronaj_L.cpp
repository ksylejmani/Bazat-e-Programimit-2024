#include<iostream>
using namespace std;
int main(){
    int numri;
    cout<<"Caktojeni numrin n: ";
    cin>>numri;
    for(int i=1;i<=numri;i++ /* ose i=i+1 ose i+=1 */)
        cout<<"*"<<endl;
    for(int i=1;i<=numri/2;i++)
        cout<<"* ";
    cout<<endl;

    return 0;
}
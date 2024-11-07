#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int shpejtesia, denimi;
    char valuta='\x24';
    cout<<"Sa eshte shpejtesia e levizjes: ";
    cin>>shpejtesia;
    if(shpejtesia<=30)
        denimi=0;
    else if(shpejtesia<=50)
        denimi=30;
    else
        denimi=100;
    cout<<"Denimi eshte: " /*<<setfill('€')*/ <<denimi<<valuta<<endl;
    return 0;
}
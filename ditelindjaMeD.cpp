#include<iostream>
using namespace std;
int main(){
    int dita_sot,ditelindja;
    cout<<"Cfare date eshte sot: ";
    cin>>dita_sot;
    cout<<"Cila eshte dita e lindjes suaj: ";
    cin>>ditelindja;
    if(ditelindja<dita_sot){
        cout<<"Ditelindja e juaj ka qene para ";
        cout<<dita_sot-ditelindja<<" dite."<<endl;
    }
    else if(ditelindja==dita_sot)
        cout<<"Urime! Sot e keni ditelindjen."<<endl;
    else
        cout<<"Ditelindja e juaj do te jete edhe "
            <<ditelindja-dita_sot<<" dite."<<endl;
    return 0;
}
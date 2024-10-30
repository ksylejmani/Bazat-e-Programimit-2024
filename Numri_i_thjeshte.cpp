#include<iostream>
using namespace std;
int main(){
    int numri;
    bool p;
    cout<<"Jepe nje numer: ";
    cin>>numri;
    p=true;
    // for(int i=2;i<=numri/2;i=i+1){
    //     cout<<"Prova"<<endl;
    //     if(numri%i==0){
    //         p=false;
    //         cout<<"Test"<<endl;
    //         break;
    //     }
    // }
    int i=2;
    while(i<=numri/2){
        cout<<"Prova"<<endl;
        if(numri%i==0){
            p=false;
            cout<<"Test"<<endl;
            break;
        }
        i=i+1;
    }
    if(p)
        cout<<"Numri "<<numri<<" eshte i thjeshte\n";
    else
         cout<<"Numri "<<numri<<" nuk eshte i thjeshte\n";
    return 0;
}
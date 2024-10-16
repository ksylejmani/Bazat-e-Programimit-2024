#include<iostream>
using namespace std;
int main(){
    int piket, aktiviteti_ligjerata, aktiviteti_ushtrime,nota;
    bool rez;
    cout<<"Shkruaj piket: ";
    cin>>piket;
    cout<<"Shkruaj piket nga ligjeratat: ";
    cin>>aktiviteti_ligjerata;
    cout<<"Shkruaj piket nga ushtrimet: ";
    cin>>aktiviteti_ushtrime;
    // rez=(piket>=40)?(true):(false);
    // cout<<"Kalueshmeria: "<<rez<<endl;
    if(piket>=40){
        int totali=piket+aktiviteti_ligjerata+aktiviteti_ushtrime;
        if(totali<50){
            rez=false;
            nota=5;
        } else if(totali<60){
            rez=true;
            nota=6;
        } else if(totali<70){
            rez=true;
            nota=7;
        }else if(totali<80){
            rez=true;
            nota=8;
        }else if(totali<90){
            rez=true;
            nota=9;
        }
        else{
            rez=true;
            nota=10;
        }
    }
    else{
        rez=false;
        nota=5;
    }
    if(rez){
        cout<<"Urime! Ju keni kaluar lenden!\n";
        cout<<"Nota e juaj eshte "<<nota<<".\n";
    }
    else{
        cout<<"Na vije keq, por nuk e keni kaluar provimin.\n";
        cout<<"Sukses heren tjeter!\n";
    }
    return 0;
    }
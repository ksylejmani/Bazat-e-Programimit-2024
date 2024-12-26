#include "Fakulteti.h"
int Fakulteti::f1(){
    int rez;
    if(nrAplikimeve>pozitatEHapura){
        rez=nrAplikimeve-nrStudenteve;

    }
    else{
        rez=0;
    }
    return rez;
}
void Fakulteti::f2(int nr){
    if(nr<0){
        cout<<"Nuk lejohet numër negativ i studentëve\n";
        return;
    }
    else if(nrStudenteve+nr>pozitatEHapura){
        cout<<"Numri i studentëve është tejkaluar\n";
        return;
    }
    else{
        nrStudenteve=nrStudenteve+nr;
        pozitatEHapura=pozitatEHapura-nr;
    }

}
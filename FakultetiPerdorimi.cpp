#include<iostream>
#include "Fakulteti.h"
using namespace std;
int main(){
    Fakulteti f;
    f.emri="UP-FIEK";
    f.nrAplikimeve=609;
    f.nrStudenteve=0;
    f.pozitatEHapura=510;

    f.f2(420);
    cout<<"Numri i studenteve qe jane jashte listes se pranimit: "
        <<f.f1()<<endl;
    f.nrAplikimeve=189;
    f.f2(60);
    cout<<"Nr pozitave te hapura: "<<f.pozitatEHapura<<endl;
    cout<<"Numri i studenteve qe jane jashte listes se pranimit: "
        <<f.f1()<<endl;

    return 0;
}
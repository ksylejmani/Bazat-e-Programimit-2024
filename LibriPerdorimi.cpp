#include <iostream>
#include "Libri.h"
using namespace std;
int main(){
    Libri lib;
    lib.titulli="Gjenerali i Ushtrise se Vdekur";
    lib.nrKopjeve=20;
    lib.nrKopjeveTeHuazuara=0;

    lib.huazimi();
    lib.huazimi();
    lib.huazimi();

    cout<<"Numri i kopjeve te mbetura: "<<lib.nrKopjeve<<endl;
    cout<<"P\x89rqindja e kopjeve të huazuara: "<<lib.gjendja()<<endl;
    cout<<"Numri i kopjeve te huazuara: "<<lib.nrKopjeveTeHuazuara<<endl;
    return 0;
}
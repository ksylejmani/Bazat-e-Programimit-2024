#include "Libri.h"
void Libri::huazimi(){
    nrKopjeve--;
    nrKopjeveTeHuazuara++;
}
double Libri::gjendja(){
    double rez=100*(double)nrKopjeveTeHuazuara/(nrKopjeve+nrKopjeveTeHuazuara);
    return rez;
}
#include<iostream>
#include<math.h>
using namespace std;
enum llogaritja{
    gjetja=1, mesatarja, diferenca, shuma_brenda_diapazonit
};
double llogarit(int vargu[], int m, int x, llogaritja llog){
    double rez;
    switch (llog)
    {
    case gjetja:
    {
        rez=-1;
        for(int i=0;i<m;i++){
            if(vargu[i]==x){
                rez=i;
                break;
            }
        }
        break;
    }
    case mesatarja:
    {
        int s=0;
        for(int i=0;i<m;i++){
            s=s+vargu[i];
        }
        rez=(double)s/m;
        break;
    }
    case diferenca:
    {
        rez=abs(vargu[0]-vargu[m-1]);
        break;
    }
    case shuma_brenda_diapazonit:
    {
        rez=0;
        int n1,n2;
        cout<<"Jepni dy vlera per diapazonin: ";
        cin>>n1>>n2;
        for(int i=0;i<m;i++){
            if(vargu[i]>n1 && vargu[i]<n2){
                rez=rez+vargu[i];
            }
        }
        break;
    }
    default:
    {
        cout<<"Nuk eshte caktuar nje veprim valid per llogaritje\n";
        rez=-2;
        break;
        }
    }
    return rez;
}
int main(){
    int intLl;
    cout<<"Zgjedhni llojin e llogaritje (1-gjetje, 2-mestare, 3-diference, ;";
    cout<<" 4-shuma brenda diapazonit): ";
    cin>>intLl;
    llogaritja ll=static_cast<llogaritja>(intLl);
    int vlera=0;
    if(ll==gjetja){
        cout<<"Jepe nje vlere: ";
        cin>>vlera;
    }
    const int m=6;
    int vargu[m]={3,8,0,4,6,7};
    string mesazhi;
    if(ll==gjetja){
        mesazhi="Pozita ku gjendet vlera: ";
        cout<<mesazhi<<llogarit(vargu,m,vlera,ll)+1<<endl;
    }
    else if(ll==mesatarja){
        mesazhi="Mesatarja: ";
        cout<<mesazhi<<llogarit(vargu,m,vlera,ll)<<endl;
    }
    else if(ll==diferenca){
        mesazhi="Diferenca absolute ne mes te anetarit te pare dhe te fundit: ";
        cout<<mesazhi<<llogarit(vargu,m,vlera,ll)<<endl;
    }
    else{
        mesazhi="Shuma e anetareve brenda diapazonit: ";
        cout<<mesazhi<<llogarit(vargu,m,vlera,ll)<<endl;
    }
    return 0;
}
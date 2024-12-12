#include<iostream>
using namespace std;
const int n=2;
const int m=7;
double mesatarja(int t[],int m);
int numro_cift(int vargu[],int m){
    int rez=0;
    for(int i=0;i<m;i++){
        cout<<"Prova"<<endl;
        if(vargu[i]%2==0){
            rez++;
            cout<<"Test"<<endl;
        }
    }
    return rez;
}
void bashko_vargjet(int vargu1[], int vargu2[], int matrica[n][m]);
void shtyp_matricen(int matrica[n][m]);
int main(){
    int tp[m]={-3,5,5,6,1,2,10};
    int tm[m]={-2,6,5,4,3,2,9};
    cout<<"Mesatarja e temperaturave te parashikuara: "
        <<mesatarja(tp,m)<<endl;
    cout<<"Mesatarja e temperaturave te matura: "
        <<mesatarja(tm,m)<<endl;
    cout<<"Numri i vlerave cift per temperaturat e parashikuara eshte: "
        <<numro_cift(tp,m)<<endl;
    int mat[n][m];
    bashko_vargjet(tp,tm,mat);
    shtyp_matricen(mat);
    return 0;
}
double mesatarja(int t[],int m){
    int s=0;
    for(int i=0;i<m;i++){
        s=s+t[i];
    }
    double mes=(double)s/m;
    return mes;
}
void bashko_vargjet(int vargu1[], int vargu2[], int matrica[n][m]){
    for(int i=0;i<m;i++){
        matrica[0][i]=vargu1[i];
        matrica[1][i]=vargu2[i];
    }
}
void shtyp_matricen(int matrica[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
}
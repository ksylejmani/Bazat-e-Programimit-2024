#include<iostream>
using namespace std;
double mesatarja(int vargu[], int m){
    int s=0;
    for(int i=0;i<m;i++){
        s=s+vargu[i];
    }
    double mes=s/(double)m;
    return mes;
}
double mesatarja(int vargu[], int m,int fillimi, int fundi){
    int s=0;
    for(int i=fillimi-1;i<fundi;i++){
        s=s+vargu[i];
    }
    double mes=s/(double)(fundi-fillimi+1);
    return mes;
}
int main(){
    const int m=6;
    int vargu[m]={2,7,11,2,8,5};
    int fillimi=2,fundi=4;
    cout<<"Mesatarja e komplet vargut: "
        <<mesatarja(vargu,m)<<endl;
    cout<<"Mesatraj e vargut nga pozita "
        <<fillimi<<" deri te pozita "<<fundi
        <<" eshte: "<<mesatarja(vargu,m,fillimi,fundi)<<endl; 
    return 0;
}
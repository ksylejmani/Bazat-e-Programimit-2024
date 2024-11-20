#include<iostream>
using namespace std;
int main(){
    const int m=6;
    float d[4][m]={{2,1.5,3,1.2,1.3,2.4},
                    {5,3,6,7,5,5},
                    {35,28,55,58,30,40},
                    {12,14,11,17,10,16}};
    float sm=0,sp=0,sk=0,st=0,mes;
    for(int j=0;j<m;j++){
        sm=sm+d[0][j];
        sp+=d[1][j];
        sk+=d[2][j];
        st+=d[3][j];
    }
    mes=st/m;
    cout<<"Shpenzimet ne material: "<<sm<<endl;
    cout<<"Numri total i punetoreve: "<<sp<<endl;
    cout<<"Numri total i oreve: "<<sk<<endl;
    cout<<"Temperatura mesatare: "<<mes<<endl;
    return 0;
}
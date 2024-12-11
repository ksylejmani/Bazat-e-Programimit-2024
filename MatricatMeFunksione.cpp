#include<iostream>
#include<math.h>
using namespace std;
const int m=5;
bool eshte_i_thjeshte(int numri);
int numro_vlerat_e_thjeshta_ne_mbeshtjelles(int matrica[m][m]);
int main(){
    int matrica[m][m]={{3,3,3,3,3},
                        {7,7,7,7,7},
                        {11,11,11,11,11},
                        {14,14,14,14,14},
                        {19,19,19,19,19}};
    cout<<"Numri i vlerave te thjeshta eshte: "
        <<numro_vlerat_e_thjeshta_ne_mbeshtjelles(matrica)<<endl;

    return 0;
}
bool eshte_i_thjeshte(int numri){
    bool rez=true;
    for(int i=2;i<sqrt(numri);i++){
        if(numri%i==0){
            rez=false;
            break;
        }
    }
    return rez;
}
int numro_vlerat_e_thjeshta_ne_mbeshtjelles(int matrica[m][m]){
    int rez=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==0||i==m-1||j==0||j==m-1){
                if(eshte_i_thjeshte(matrica[i][j])){
                    rez++;
                }
            }
        }
    }
    return rez;
}
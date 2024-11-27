#include<iostream>
using namespace std;
int main(){
    const int m=4;
    int A[m][m]={   {3,2,1,-2},
                    {0,3,5,3},
                    {7,6,3,2},
                    {5,6,0,1}};
    int n1=0,n2=0,n3=0;
    int i=0;
    do{
        int j=0;
        do{
            cout<<"TestA\n";
            if(i==j){
                cout<<"TestB\n";
                if(A[i][j]%2==0){
                    cout<<"TestC\n";
                    n1=n1+1;
                }
            }
            else if(i<j){
                if(A[i][j]%2==1){
                    n2=n2+1;
                }
            }
            else{
                if(A[i][j]>0){
                    n3=n3+1;
                }
            }
            j++;
        }while(j<m);
        i++;
    }while (i<m);
    cout<<"Numri i vlerave cift ne diagonale: "<<n1<<endl;
    cout<<"Numri i vlerave tek mbi diagonale: "<<n2<<endl;
    cout<<"Numri i vlerave pozitive nen diagonale: "<<n3<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    const int n=6;
    int A[n]={7,6,2,14,4,9};
    int max=A[0]; int min=A[0];
    for(int i=1;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
        if(A[i]<min){
            min=A[i];
        }
    }
    cout<<"Vlera maksimale: "<<max<<endl;
    cout<<"Vlera minimale: "<<min<<endl;
    cout<<"Diferenca: "<<max-min<<endl;
    return 0;
}
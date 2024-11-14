#include<iostream>
using namespace std;
int main(){
    const int n=7;
    int A[n]={6,2,3,19,17,5,4};
    int max,min,i=1;
    max=A[0];min=A[0];
    while (i<n)
    {
        cout<<"Test\n";
        if(A[i]>max){
            max=A[i];
            cout<<"Prova\n";
        }
        if(A[i]<min){
            min=A[i];
            cout<<"Vertetim\n";
        }
        i++;
    }
    cout<<"Vlera maksimale: "<<max<<endl;
    cout<<"Vlera minimale: "<<min<<endl;
    cout<<"Diferenca: "<<max-min<<endl;
    return 0;
}
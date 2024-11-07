#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const int n=5;
    int vargu[n]={4,6,3,5,1};
    //Shtypja e vargut
    cout<<"Vargu origjinal: ";
    for(int i=0;i<n;i++){
        cout<<setw(3)<<vargu[i];
    }
    //Dyfishimi i vlerave te vargut
    for(int i=0;i<n;i++){
        vargu[i]=vargu[i]*2;
    }
    //Shtypja e vargut
    cout<<"\nVargu me vlera te dyfishuara: ";
    for(int i=0;i<n;i++){
        cout<<setw(3)<<vargu[i];
    }
    return 0;
}
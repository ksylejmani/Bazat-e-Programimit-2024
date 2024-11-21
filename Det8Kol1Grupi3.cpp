#include<iostream>
using namespace std;
int main(){
    const int n=6;
    int vargu[n]={}; // ose {0,0,0,0,0,0};
    int tek=0;
    for(int i=0;i<n;i++){
        // int temp;
        // cout<<"Shkruani anetarin "<<i+1<<": ";
        // cin>>temp;
        // if(temp%2==0){
        //     vargu[i]=temp;
        // }
        // else{
        //     tek++;
        // }
        cout<<"Shkruani anetarin "<<i+1<<": ";
        cin>> vargu[i];
        if( vargu[i]%2==1){
            tek++;
            vargu[i]=0;
        }
    }
    cout<<"Numri i vlerave te lexuar qe kanë qenë tek dhe nuk janë shtuar në varg: "
        <<tek<<endl;


    return 0;
}
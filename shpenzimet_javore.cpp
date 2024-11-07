#include<iostream>
using namespace std;
int main(){
    int buxheti;
    const int n=7;
    float shpenzimet[n]; // 28 Byte
    float kursimi, totali;
    cout<<"Sa eshte buxheti javor: ";
    cin>>buxheti;
    // for(int i=0;i<n;i++){
    //     cout<<"Sa jane shpenzimet per diten "<<i+1<<": ";
    //     cin>>shpenzimet[i];
    // }
    int i=0;
    totali=0;
    while(i<n){
        cout<<"Sa jane shpenzimet per diten "<<i+1<<": ";
        cin>>shpenzimet[i];
        totali=totali+shpenzimet[i];
        i++;
    }

    // for(int i=0;i<n;i++){
    //     totali=totali+shpenzimet[i];
    // }
    if(totali<=buxheti){
        cout<<"Buxheti nuk tejkalohet."<<endl;
        kursimi=buxheti-totali;
        if(kursimi>0){
            cout<<"Ka kursime dhe vlera e kursyer eshte: "<<kursimi<<endl;
        }else{
            cout<<"Nuk ka kursime."<<endl;
        }

    }
    else{
        cout<<"Buxheti eshte tejkaluar ne vleren prej: "<<totali-buxheti<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int inventari=0;
int shtoProdukte(int sasia){
    inventari+=sasia;
    return inventari;
}
int largoProdukte(int sasia){
    if(sasia>inventari){
        cout<<"Gabim! Sasia eshte me e madhe se inventari.\n";
    }
    else{
        inventari-=sasia;
    }
    return inventari;
}
int main(){
    cout<<"Sasia pas shtimit te pare eshte: "<<shtoProdukte(5)<<endl;
    cout<<"Sasia pas shtimit te dyte eshte: "<<shtoProdukte(10)<<endl;
    cout<<"Sasia pas largimit te produkteve eshte: "<<largoProdukte(7)<<endl;
    cout<<"Sasia pas largimit te produkteve eshte: "<<largoProdukte(10)<<endl;
    cout<<"Sasia pas shtimit te trete eshte: "<<shtoProdukte(15)<<endl;
    cout<<"Sasia pas largimit te produkteve eshte: "<<largoProdukte(20)<<endl;
    return 0;
}
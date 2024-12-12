#include<iostream>
using namespace std;
int prodhimi(int a, int b);
int prodhimi(int a, int  b, int c);
int main(){
    int a,b,c;
    cout<<"Cakto vlerat per a, b dhe c: ";
    cin>>a>>b>>c;
    cout<<"Prodhimi 1: "<<prodhimi(a,b)<<endl;
    cout<<"Prodhimi 2: "<<prodhimi(a,b,c)<<endl;

    return 0;
}
int prodhimi(int a, int b){
    int p=1;
    for(int i=a;i<=b;i++){
        p=p*i;
    }
    return p;
}
int prodhimi(int a, int  b, int c){
    int p=1;
    for(int i=a;i<=b;i++){
        if(i==c){
            continue;
        }
        else{
            p=p*i;
        }
    }
    return p;
}
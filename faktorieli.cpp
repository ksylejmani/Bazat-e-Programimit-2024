#include<iostream>
using namespace std;
int main(){
    long int n,x;
    long long int f,y;
    char perfundimi;
    pika_e_kthimit:
    cout<<"Cakto vlerat per x dhe n: ";
    cin>>x>>n;
    f=1;
    // for(int i=2;i<=n;i++ /* ose i=i+1 ose i+=1*/){
    //     cout<<"Test"<<endl;
    //     f=f*i;
    // }
    int i=2;
    while(i<=n){
        cout<<"Test"<<endl;
        f=f*i;
        i++; /* ose i=i+1 ose i+=1*/
    }
    y=2*x+1+f;
    cout<<"Rezultati y = "<<y<<endl;
    cout<<"A te perseritet programi (shkruaj p per po ose cilindo tast tjeter per jo):";
    cin>>perfundimi;
    if(perfundimi=='p'|| perfundimi=='P'){
        goto pika_e_kthimit;
    }
    else{
        cout<<"Programi perfundon ketu!\n";
    }
    return 0;
}
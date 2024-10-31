#include<iostream>
using namespace std;
int main(){
    int a, b, n,i,p,y;
    cout<<"Cakto vlerat per a, b dhe n: ";
    cin>>a>>b>>n;
    p=1;
    i=1;
    do{
        if(i!=3)
            p=p*(a*i+b);
        i=i+1;
    }while(i<=n+1);
    y=a+p;
    cout<<"y="<<y<<endl;

    return 0;
}
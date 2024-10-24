#include<iostream>
using namespace std;
int main(){
    int a,b,k;
    int i,s;
    cout<<"Cakto a, b dhe k: ";
    cin>>a>>b>>k;
    s=0;
    i=a;
    do{
        if(i!=k)
            s=s+i;
        i=i+1; // ose i++; i+=1;
    }while(i<=b);
    cout<<"Shuma: "<<s<<endl;
    return 0;
}
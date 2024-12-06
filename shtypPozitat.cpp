#include<iostream>
using namespace std;
void shtypPozitat(int vargu[],int m,int n){
    for(int i=0;i<m;i++){
        if(vargu[i]==n){
            cout<<"Numri "<<n<<" ndodhet ne poziten "<<i+1<<endl;
        }
    }
}
int main(){
    const int m=9;
    int n;
    cout<<"Cakto vlern per n: ";
    cin>>n;
    int vargu[m]={1,-1,3,0,4,7,2,-1,-1};
    shtypPozitat(vargu,m,n);
    return 0;
}
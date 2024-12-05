#include<iostream>
using namespace std;
void shtyp_vijat_horizontale(int n){
    for(int i=1;i<=n;i++){
        cout<<'-';
    }
    cout<<endl;
}
void shtyp_vijat_vertikale(int n){
    for(int i=1;i<=n;i++){
        cout<<'|'<<endl;
    }
}
int main(){
    int n;
    cout<<"Cakto vleren per n: ";
    cin>>n;
    shtyp_vijat_horizontale(n);
    shtyp_vijat_vertikale(n/2);
    shtyp_vijat_horizontale(n);
    shtyp_vijat_vertikale(n/2);
    cout<<endl<<endl;
    shtyp_vijat_vertikale(n);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    const int n=7;
    int d[n];
    int i,k,m/*, t*/;
    cout<<"Jepni vleren per plotepjestim: ";
    cin>>m;
    // for(i=0;i<n;i++){
    //     cout<<"Caktoje diten e lindjes per studentin/en "<<i+1<<":";
    //     cin>>d[i];
    // }
    k=0; /*t=0;*/
    i=0;
    while(i<n){
        cout<<"Caktoje diten e lindjes per studentin/en "<<i+1<<":";
        cin>>d[i];
        cout<<"Kane mbetur edhe "<<n-i-1<<" dite.\n";
        if(d[i]%m==0){
            k++;
            cout<<"Test"<<endl;
        }
        i++; /* ose i=i+1 ose i+=1 */
    //else
    //     {
    //         t++;
    //     }
     }
    // cout<<"Numri i studenteve qe kane diten e lindjes numer cift eshte: "
    //     <<k<<endl;
    cout<<"Numri i studenteve qe kane diten e lindjes qe plotepjestohet me "
        <<m<<" eshte " 
        <<k<<endl;
    // cout<<"Numri i studenteve qe kane diten e lindjes numer tek eshte: "
    //     <<n-k<<endl;
    return 0;
}
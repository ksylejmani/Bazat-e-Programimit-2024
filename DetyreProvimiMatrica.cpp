#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int m=4, n=3;
    int matrica[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Cakto anetarin A["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matrica[i][j];
        }
    }
    int k=0,s=0;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if(matrica[i][j]>matrica[0][0]){
                k++;
            }
            if(i%2==1 && j%2==1){
                s=s+matrica[i][j];
            }
        }
    }
    for(int i=1;i<m-1;i++){
        for(int j=0;j<n;j++){
            cout<<setw(4)<<matrica[i][j];
        }
        cout<<endl;
    }
    cout<<"Rez nen c: "<<k<<endl;
    cout<<"Rez nen d: "<<s<<endl;
    return 0;
}
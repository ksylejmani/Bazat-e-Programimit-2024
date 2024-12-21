#include<iostream>
using namespace std;
int main(){
    const int m=5;
    int B[m]={5,4,3,2,1};
    int A[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                A[i][j]=B[i];
            }
            else{
                A[i][j]=i+1;
            }
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
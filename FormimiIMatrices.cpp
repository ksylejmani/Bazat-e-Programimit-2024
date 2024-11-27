#include<iostream>
using namespace std;
int main(){
    const int m=6;
    int A[m]={2,4,6,8,12,14};
    int B[m][m]={{0,0,0,0,0,0},
    {1,1,1,1,1,1},
    {2,2,2,2,2,2},
    {3,3,3,3,3,3},
    {4,4,4,4,4,4},
    {5,5,5,5,5,5}};
    int C[m+1][m];
    int i=0;
    do{
        int j=0;
        do{
            if(i==0){
                C[i][j]=A[j];
            }
            else
            {
                C[i][j]=B[i-1][j];
            }
            j++;
        }while(j<m);
        i++;
    }while(i<m+1);
    for(i=0;i<m+1;i++){
        for(int j=0;j<m;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
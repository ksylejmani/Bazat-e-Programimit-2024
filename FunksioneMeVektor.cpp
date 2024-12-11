#include<iostream>
using namespace std;
int maksimalja(int A[], int m);
int minimalja(int A[], int m);
int rangu(int A[],int m){
    int r=maksimalja(A,m)-minimalja(A,m);
    return r;
}
int main(){
    const int m=6;
    int A[m]={2,7,11,2,8,5};
    cout<<"Maksimalja: "<<maksimalja(A,m)<<endl;
    cout<<"Minimalja: "<<minimalja(A,m)<<endl;
    cout<<"Rangu: "<<rangu(A,m)<<endl;

    return 0;
}
int maksimalja(int A[], int m){
    int max=A[0];
    for(int i=1;i<m;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}
int minimalja(int A[], int m){
    int min=A[0];
    for(int i=1;i<m;i++){
        if(A[i]<min){
            min=A[i];
        }
    }
    return min;
}

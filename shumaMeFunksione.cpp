#include<iostream>
using namespace std;
long long int shuma(int p1, int p2, int p3, int p4);
int main(){
    int n,a,b;
    cout<<"Sheno vlerat per n, a dhe b: ";
    cin>>n>>a>>b;
    long long int y=2*a*shuma(1,n,1,1)+b*shuma(2,n+2,2,0)+a*b*shuma(3,n-1,1,0);
    cout<<"Vlera per y= "<<y<<endl;
    return 0;
}
long long int shuma(int p1, int p2, int p3, int p4){
    int s=0;
    for(int i=p1;i<=p2;i++){
        s=s+(p3*i+p4);
    }
    return s;
}
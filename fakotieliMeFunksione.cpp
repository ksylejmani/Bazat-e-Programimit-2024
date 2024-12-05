#include<iostream>
using namespace std;
long long int faktorieli(int a);
int main(){
    int n;
    long long int y;
    cout<<"Sa eshte vlera per n: ";
    cin>>n;
    y=faktorieli(n+1)+faktorieli(n-2)+faktorieli(6);
    cout<<"Rezultati y = "<<y<<endl;
    return 0;
}
long long int faktorieli(int a){
    long long int f=1;
    if (a<0)
        return 0;
    else if(a==0)
        return 1;
    int i=2;
    while (i<=a)
    {
        f=f*i;
        i++;
    }
    return f;
}
#include<iostream>
using namespace std;
int main(){
    const int n=7;
    int A[n]={1,55,12,4,12,55,2};
    bool rez=true;
    int i=0;
    while (i<n/2)
    {
        if(A[i]!=A[n-i-1]){
            cout<<"Prova\n";
            rez=false;
            break;
        }
        i++;
        cout<<"Test\n";
    }
    if(rez)
        cout<<"Vargu eshte palindrom.";
    else
        cout<<"Vargu nuk eshte palindrom.";
    return 0;
}
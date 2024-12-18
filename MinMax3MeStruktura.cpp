#include<iostream>
using namespace std;
struct MinMaxMes
{
    int a, b,c;
    void lexo_vlerat(){
        cout<<"Cakto vlerat a, b dhe c: ";
        cin>>a>>b>>c;
    }
    int min(){
        int m=a;
        if(b<m)
            m=b;
        if(c<m)
            c=m;
        return m;
    }
    int max(){
        int m=a;
        if(b>m)
            b=m;
        if(c>m)
            c=m;
        return m;
    }
    double mes(){
        double r=(a+b+c)/3.0;
        return r;
    }
};

int main(){
    MinMaxMes mmm;
    mmm.lexo_vlerat();
    cout<<"Minimalja: "<<mmm.min()<<endl;
    cout<<"Maksimalja: "<<mmm.max()<<endl;
    cout<<"Mestarja: "<<mmm.mes()<<endl;
    return 0;
}
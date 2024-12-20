#include<iostream>
using namespace std;
enum llogaritja{
    inicialet=1,
    shtypja,
    fjalet,
    numro_hapesirat,
    kthe_mbrapsht
};
void Llogarit(llogaritja L, string fjalia){
    switch(L){
        case inicialet:
            cout<<"Inicialet e programit:\n";
            for(int i=0;i<fjalia.length();i++){
                if(i==0 || fjalia[i-1]==' ')
                    cout<<fjalia[i]<<" ";
            }
            cout<<endl;
            break;
        case shtypja:
            cout<<"Teksti me vija ne mes: \n";
            for(int i=0;i<fjalia.length();i++){
                cout<<fjalia[i];
                if(fjalia[i]!=' '){
                    cout<<"-";
                }
            }
            cout<<endl;
            break;
        case fjalet:
            cout<<"Fjale per fjale: \n";
            for(int i=0;i<fjalia.length();i++){
                if(fjalia[i]==' ')
                    cout<<endl;
                else
                    cout<<fjalia[i];
            }
            cout<<endl;
            break;
        case numro_hapesirat:{
            cout<<"Numri i hapesirave: ";
            int hapesirat=0;
            for(int i=0;i<fjalia.length();i++){
                if(fjalia[i]==' ')
                    hapesirat++;
            }
            cout<<hapesirat<<endl;
            break;
        }
        case kthe_mbrapsht:
            cout<<"Fjalia mbrapsht: ";
            for(int i=fjalia.length()-1;i>=0;i--){
                cout<<fjalia[i];
            }
            cout<<endl;
            break;
    }
}
int main(){
    string fjalia;
    cout<<"Shkruaj nje fjali: ";
    getline(cin,fjalia);
    llogaritja L;
    cout<<"Cfare deshironi te llogaritni:\n";
    cout<<"1. Inicialet e programit\n";
    cout<<"2. Teksti me vija ne mes\n";
    cout<<"3. Numri i fjalive\n";
    cout<<"4. Numri i hapesirave\n";
    cout<<"5. Kthe fjaline mbrapsht\n";
    int zgjedhja;
    cin>>zgjedhja;
    L=(llogaritja)zgjedhja;
    Llogarit(L,fjalia);
    return 0;
}
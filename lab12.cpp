#include <iostream>
#include <string>
#include <windows.h>
#include <set>
using namespace std;
struct pairs{
    int A, B;
    bool operator<(const pairs& other) const {
        if (A != other.A) {
            return A < other.A;
        }
        return B < other.B;
    }
    void operator=(const pairs& other){
        A=other.A;
        B=other.B;
    }
};
int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    set<int>A;
    set<int>::iterator it;
    set<int>B;
    set<int>::iterator that;
    cout<<"Ввод множества A (0 для ококнчания):"<<endl;
    int a;
    string n1;
    while(true){
        cout<<"Введите элемент множества A ";
        try{
            cin>>n1;
            a=stoi(n1);
        }
        catch(std::invalid_argument){
            cout<<"Некорректный ввод.";
            return(0);
        }
        if(a<0 || a>30){
            cout<<"Некорректный ввод.";
            return(0);
        }
        if(a!=0){
                A.insert(a);
        }else{break;}
    }
    cout<<"Ввод множества B (0 для ококнчания):"<<endl;
    n1=' ';
    while(true){
        cout<<"Введите элемент множества B ";
        try{
            cin>>n1;
            a=stoi(n1);
        }
        catch(std::invalid_argument){
            cout<<"Некорректный ввод.";
            return(0);
        }
        if(a<0 || a>30){
            cout<<"Некорректный ввод.";
            return(0);
        }
        if(a!=0){
            B.insert(a);
        }else{break;}
    }
    A.erase(0);
    B.erase(0);
    pairs ab;
    set<pairs>AB;
    set<pairs>::iterator here;
    for(it=A.begin();it!=A.end();it++){
        ab.A=*it;
        for(that=B.begin();that!=B.end();that++){
            ab.B=*that;
            AB.insert(ab);
        }
    }
    for (here=AB.begin();here!=AB.end();here++) {
            ab=*here;
        cout << "(" << ab.A << "," << ab.B << ") ";
    }
    cout<<endl<< AB.size();
}

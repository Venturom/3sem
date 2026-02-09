#include <iostream>
#include <string>
#include <windows.h>
#include <set>
using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    set<char>C;
    set<char>::iterator it;
    string s;
    cout<<"Введите строку: ";
    getline(cin,s);
    if(s.empty()){
        cout<<"Некорректный ввод.";
        return(0);
    }
     for(int i=0;s[i];i++){
        if((s[i]<='z' && s[i]>='x')||(s[i]<='Z' && s[i]>='X')||(s[i]>='a' && s[i]<='f')||(s[i]>='A' && s[i]<='F')){
            C.insert(s[i]);
        }
    }
    for(it=C.begin();it!=C.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl<<"Множество состоит из "<<C.size()<<" элементов";
}

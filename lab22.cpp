#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;
int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ifstream text("text.txt");
    if(!text.is_open()){
        cout<<"Ошибка при открытии файла";
        return(0);
    }
    cout<<"Файл открыт успешно";
    string a;
    ofstream fixed("fixedtext.txt");
    while(getline(text, a)){
        for(int i=0;i<a.length();i++){
            if(a[i]!='-'){
                fixed<<a[i];
            }
        }
        fixed<<endl;
    }

}

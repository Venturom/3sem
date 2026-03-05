#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <vector>
using namespace std;
int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ifstream data("data.txt");
    if(!data.is_open()){
        cout<<"Ошибка при открытии файла";
        return(0);
    }
    cout<<"Файл открыт успешно";
    string a;
    ofstream days("days.txt");
    ofstream months("months.txt");
    vector<string> dayin;
    while(!data.eof()){
        getline(data, a); // dd/mm/yyyy
        months<<a[3]<<a[4]<<endl;
        dayin.push_back(string(1, a[0]) + string(1, a[1]));
    }
    for (int i=dayin.size()-1; i>=0;--i){
        days<<dayin[i]<<endl;
    }
    cout<<"Создание и заполнение новых файлов прошло успешно";
}

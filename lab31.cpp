#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
    string n1;
    cout<<"Введите размер массива A ";
    try{
        cin>>n1;
        N=stoi(n1);
    }
    catch(std::invalid_argument){
        cout<<"Некорректный ввод.";
        return(0);
    }

    int A[N];
    cout<<"Чётные числа: ";
    for(int *ptr{A}; ptr<=&A[N-1]; ptr++){
        *ptr=rand()%201-100;
        if(*ptr%2==0){
            cout<<*ptr<<" ";
        }
    }
    cout<<endl<<"Нечётные числа: ";
    for(int *ptr{A}; ptr<=&A[N-1]; ptr++){
        if(*ptr%2==1){
            cout<<*ptr<<" ";
        }
    }
}

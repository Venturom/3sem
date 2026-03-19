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
    cout<<"Сгенерированный массив:"<<endl;
    for(int *ptr{A}; ptr<=&A[N-1]; ptr++){
        *ptr=rand()%3;
        cout<<*ptr<<" ";
    }
    cout<<endl;
    int multi=1;
    for(int *ptri{A}; ptri<=&A[N-1]; ptri++){
        if(*ptri==0){
            if(*(ptri+1)==0){
                cout<<"Первые два нулевых элемента идут подряд ";
                return(0);
            }
            if(ptri==&A[N-1]){
                cout<<"Нулевой элемент только один ";
                return(0);
            }
            for(int *ptrj=ptri+1; ptrj<=&A[N-1]; ptrj++){
                if(*ptrj==0){
                    break;
                }
                if(ptrj==&A[N-1]){
                    cout<<"Нулевой элемент только один ";
                    return(0);
                }
                multi=multi*(*ptrj);
            }
        break;
        }else if(ptri==&A[N-1]){
            cout<<"Нулевых элементов нет ";
            return(0);
        }
    }
    cout<<endl<<"Произведение элементов между первыми двумя нулевыми элементами: "<<multi;
}

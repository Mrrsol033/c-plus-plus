#include <iostream>
using namespace std;

int main (){

    system("cls");
    int n = 9;
    int values[n]={10,20,30,40,50, 60, 70, 80, 90};
    cout<<" Show all the element "<<endl;

    for (int i =0; i <n ; i++){
        cout<<" "<<values[i];

    }
    cout<<endl;

    cout<< " For shortcut for loop :"<<endl;
    for (int value : values){
        cout<<" " <<value;
    }
    cout<<endl;
    return 0;
}
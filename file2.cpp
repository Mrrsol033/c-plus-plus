#include<iostream>

using namespace std;

int main(){
    system("cls");

  int wage, hour, salary;
    cout<<"Enter wage ($): "; cin>>wage;
    cout<<"enter hours (hrs): "; cin>>hour;
    salary = hour * wage;

    cout<<"hour : "<<hour<<"hrs"<<endl;
    cout<<"wage : "<<wage<<"$"<<endl;
    cout<<"salary : "<<salary<<"$"<<endl;

    return 0;
}





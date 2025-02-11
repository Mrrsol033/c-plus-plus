#include<iostream>
using namespace std;
 int main(){
    system("cls")
    string username;
    char gender;
    flaot hour, wage, tax, salary;

    cout<<"Input worker infor"<<endl;
    cout<<"Enter  your name: ";cin>>username;
    cout<<"enter your gender:"; cin>>gender;
    cout<<"enter your hour: "; cin>>hour;
    cout<<"enter your wage: "; cin>>wage;
    cout<<"enter your salary: "; cin>>salary;
    cout<<"enter tax: "; cin>>tax;

    salary = wage * hour;
    cout<<"Username is : "<<username<<endl;
    cout<<"gender is : "<<gender<<endl;
    cout<<"hour is : "<<hour<<endl;
    cout<<"wage is : "<<wage<<endl;
    cout<<"Tax is : "<<tax<<endl;
    cout<<"salary is :"<<salary<<endl;



    return 0;
 }





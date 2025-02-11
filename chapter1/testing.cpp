#include<iostream> 
using namespace std;
    int main (){
system ("cls");
    string username;
     char gender; 
    int age = 0;
    float wage = 10;
    float hour = 10;
    int salary;
    int tax =20;
    cout<<" Enter your name :"; cin>>username;
    cout<<" Enter your gender :";cin>>gender;
    cout<<" Enter your age :"; cin>>age;
      cout<<" Enter your wage :"; cin>>wage;
    cout<<" Enter your hour :"; cin>>hour;
        salary = wage * hour;
      float taxmoney = salary * (tax/(float)100);
         salary = salary - taxmoney;
    cout<<" Your wage is : "<<wage<<"$"<<endl; 
    cout<<" Your hour is :"<<hour<<endl;
    cout<<" Your salary is :"<<salary<<"$"<<endl;
    cout<<" Your tax is :"<<tax<<"%"<<endl;

        return 0;

    }
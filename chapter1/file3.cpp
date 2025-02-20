#include<iostream>
using namespace std;
    int main(){
        system("cls");

    string username;
    char gender;
    bool isfemale = true;
    
    float hours, wage, salary;
    int tax;


    cout<<"-------[ Input worker infor ]--------";
    cout<<" -> Enter your name: "; cin>>username;
    cout<<" -> Enter your gender:"; cin>>gender;
    
    cout<<" -> Enter your wage($): "; cin>>wage; 
    cout<<" -> Enter your working hours:"; cin>>hours;
    cout<<" -> Enter tax(%): "; cin>>tax;

        salary = wage * hours;
        float taxMoney = salary * (tax/(float)100);
        salary = salary - taxMoney;

        cout<<"-------[ Output ]---------"; 
        cout<<" Username is : "<<username<<endl;
         cout<<" Gender is : "<<gender<<endl;
        
     cout<<" Wage is : "<<wage<<"$"<<endl; 
     cout<<" Hour is : "<<hours<<"hrs"<<endl; 
     cout<<" tax is : "<<tax<<"%"<<endl;
    cout<<" Salary is : "<<salary<<"$"<<endl;
    
return 0;



    }
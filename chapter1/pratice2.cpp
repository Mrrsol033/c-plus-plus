#include<stream>
using namespace std;

    int main(){

        system("cls")
        string username;
        char sex;
        bool isfemale = true;
    
        float wage, hour, salary;
    
    cout<<"Input worker infor";
    cout<<"Enter your name: "; cin>>username;  
    cout<<"Enter your sex: "; cin>>sex;
    cout<<"Enter your wage: "; cin>>wage;
    cout<<"Enter your hour: "; cin>>hour;
    cout<<"Enter your salary: "; cin>>salary; 
 

        salary = wage * hours;
        float taxmoney = salary * (tax/(float)100);
        salary = salary - taxmoney;
        cout<<"output worker";
    cout<<" Username is: "<<username<<endl;
    cout<<" Sex is: "<<sex<<endl;
    cout<<" Wage is: "<<wage<<"$"<<endl;
    cout<<" Hour is: "<<hour<<"H"<<endl;
    cout<<" Salary is: "<<salary<<"$"<<endl;
   
     
        return 0;
     
     }
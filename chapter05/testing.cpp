#include<iostream>
using namespace std;
    
    void printLogo (){
      
        cout<<"------------logo----------"<<endl;

   cout<<" ____                                             ___  _ "<<endl; 
   cout<<" |  _ \\ _ __ ___   __ _ _ __ __ _ _ __ ___        / _ \\/ |"<<endl; 
   cout<<" | |_) | '__/ _ \\ / _` | '__/ _` | '_ ` _ \\ _____| | | | |"<<endl; 
   cout<<" |  __/| | | (_) | (_| | | | (_| | | | | | |_____| |_| | |"<<endl; 
   cout<<" |_|   |_|  \\___/ \\__, |_|  \\__,_|_| |_| |_|      \\___/|_|"<<endl; 
   cout<<"                  |___/                                   "<<endl; 
}
    void printMenu (){
       
        cout<<" 1. Money exchange program "<<endl;
        cout<<" 2. Working salary "<<endl;
        cout<<" 3. Sum/Mul progrma "<<endl;
        cout<<" 4. Exit the program "<<endl;

    }
float exchangeUSDKHR(bool isUSDToKHR){
    float amount;
    cout<<"Enter amount to exchange : "; 
cin>>amount; 
    string currency = (isUSDToKHR)?"$": "riels";
    cout<<"Enter amount ("<<currency<<" ):";
    cin>>amount;
    cout<<"Amount = "<<amount<<currency<<endl;
    if (isUSDToKHR==true){
        return amount * 4000;
    }else {
        return amount / 4000;
    }
}
    void pressEntertoContinue(){
        cout<<"=====Press Enter to continue====="<<endl;
        cin.ignore();
        cin.get();
    }

    // find tax salary
    double findSalary(float hour, float wage, char gender){
        float salary = hour * wage;
        // float  tax= 1;
        // if(salary>=1000){
        //     if(gender=='m') tax= 0.5;
        //     else tax =0.7; 
        // }
        float tax = (salary >=1000)? (gender =='m')? 0.5 : 0.7 : 1;
        return salary * tax;
    }

  int main(){

    int option;
        do {
            system("cls");
            printLogo();
            printMenu();

            cout<<" Choice your option (1 - 4): ";
            cin >>option;
            switch(option){
                system("cls");
                case 1: {
                        int op, result;
                    cout<<"[Money Exchange]"<<endl;
                    cout<<" 1. Exchange from USD >- KHR"<<endl;
                    cout<<" 2. Exchange from KHR -> USD"<<endl;
                    cout<<" 3. Exit the program "<<endl;
                    cout<<" Choice type of exchange: "; cin>>op;

                         if (op==1){
                            // cout<<exchangeUSDKHR(true)<<"riels"<<endl;
                            float rusult = exchangeUSDKHR(true);
                            cout<<"result ="<<result << "riels"<<endl;
                         } else if (op==2){
                            // cout<<exchangeUSDKHR(false)<<"$"<<endl;
                            float rusult = exchangeUSDKHR(false);
                            cout<<"result ="<<result << "$"<<endl;
                         } else if (op==3){
                                cout<<"Exit the program"<<endl;
                         } else {
                        cout<<" Invalid option ! Choice again (1 - 3)"<<endl;
                         }
                            // pressEntertoContinue();
                            cout<<"----Click enter to continue, Q to quit-----"<<endl;
                            if(cin.get()=='q')
                
            
                break;
                case 2:{
                    while(true){
                        system("cls");
                    //worker infomation find salary in per month
                    string name;
                    char gender;
                    float wage, hour, salary;
                    cout<<"-----input-----"<<endl;
                    cout<<"Enter your name :"; cin>>name;
                    cout<<"Enter your Gender :"; cin>>gender;
                    cout<<"Enter your Hours :"; cin>>hour;
                    cout<<"Enter your wage :"; cin>>wage;

                            cout<<"-----output------"<<endl;
                            cout<<"Your Name is :"<<name<<endl;
                            cout<<"your Gender is :"<<gender<<endl;
                            cout<<"Your Hours :"<<hour<<endl;
                            cout<<"your wage is :"<<wage<<"$"<<endl;
                            cout<<"Your salary is :"<<findSalary(hour, wage, gender)<<"$"<<endl;
                            pressEntertoContinue();
                }
                }
                break; 
                case 3:
                break; 
                case 4:
                break;
            default:
            break;
            }

        }
        }while(option!=4);
    return 0;
  
  }
 
#include <iostream>
#include <string>
#include <iomanip>
    using namespace std;
        void calculator();
        void dayFinder();
        void taxFinder();
        void oddAndEvenFinder();
        
    int main(){
        system("cls");
        int choice;
            while(true)
            {
                cout<<"__Please select an option__ : "<<endl;
                cout<<" 1. Calculator "<<endl;
                cout<<" 2. Day Finder "<<endl;
                cout<<" 3. Tax Finder "<<endl;
                cout<<" 4. Odd/Even Finder"<<endl;
                cout<<" 5. Exit "<<endl;
                    cout<<" Enter your choice :"; cin>>choice;
            switch(choice){
                case 1: 
                    calculator();
                    break;
                case 2:
                    dayFinder();
                    break;
                case 3:
                    taxFinder();
                    break;
                case 4:
                    oddAndEvenFinder();
                case 5:
                    cout<<" Exitting the program. Good bye!!"<<endl;
                    break;
                default:
                    cout<<" Invalid choice. Please try again!"<<endl;
                    break;
            }
            }
            
        return 0;
    }

        // calculator fucntion 
    void calculator() {
        int value1=0, value2 =0;
        float result =0;
        char op;
    
       while (true){
        system("cls");
       _sleep(700);
        cout<<" Choose operator :"<<endl;
        cin>>op;
                switch(op){
                    system("cls");
             case '-' :
                cout<<" Enter value1 :";cin>>value1;
                cout<<" Enter value2 : "; cin >>value2;
                result = value1 - value2;
                cout<<" The result is: "<<result<<endl;
               _sleep(500);
            break;
            case '+' :
                cout<<" Enter value1 :";cin>>value1;
                cout<<" Enter value2 : "; cin >>value2;
                result = value1 + value2;
                cout<<" The result is: "<<result<<endl;
                 _sleep(500);
                break;
            case '*' :
                  cout<<" Enter value1 :";cin>>value1;
                cout<<" Enter value2 : "; cin >>value2;
                result = value1 * value2;
                cout<<" The result is: "<<result<<endl;
                 _sleep(500);
                break;
            case '/':
                  cout<<" Enter value1 :";cin>>value1;
                cout<<" Enter value2 : "; cin >>value2;
                result = (float) value1 / value2;
                cout<<" The result is: "<<result<<endl;
                _sleep(500);
                break;
                 cout<<" The result is: "<<result<<endl;
            default:
                cout<<" Invalid operator !! Choose again "<<endl;
                break;
                }   
                 
                cout << " Press any key to continue, key 'Q' to quit " << endl;
                cin.ignore();
                if (cin.get() == 'q' || cin.get()=='Q')
                {
                    cout << " Exit the program " << endl;
                    break;
                }
        }  
    }
//day finder function 
void dayFinder(){
        
        int day, date, month, year;
      
       while (true)
       {
      
        cout<<" [+]--Day Finder--[+]"<<endl;
        cout << "Enter date (dd): ";
        cin >> date;
        cout << "Enter month (mm): ";
        cin >> month;
        cout << "Enter year (yyyy): ";
        cin >> year;

        if (month < 3) {
            month += 12;
            year -= 1;
        }
    
      int h = (date + (13 * (month + 1)) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
       
        switch (h) {
            case 0:
                cout << "Saturday" << endl;
                //cout<<" The day is :"<<h<<endl;
                break;
            case 1:
                cout << "Sunday" << endl;
                //cout<<" The day is :"<<h<<endl;
                break;
            case 2:
                cout << "Monday" << endl;
                //cout<<" The day is :"<<h<<endl;
                break;
            case 3:
                cout << "Tuesday" << endl;
                //cout<<" The day is :"<<h<<endl;
                break;
            case 4:
                cout << "Wednesday" << endl;
                //cout<<" The day is :"<<h<<endl;
                break;
            case 5:
                cout << "Thursday" << endl;
                //cout<<" The day is :"<<h<<endl;
                break;
            case 6:
                cout << "Friday" << endl;
               // cout<<" The day is :"<<h<<endl;
                break;
            default:
                cout << "Invalid calculation!" << endl;
                break;
        }
        if (month >= 1 && month <= 12)
        cout << "Month = " << month << " Has " << day << " days" << endl;
             // option to quite the program
      cout << "-------- <<Press any key to continue or 'q' to quit>>--------" << endl;

      cin.ignore();
      
            if (cin.get()=='q' || cin.get()=='Q')
      {
          cout<<" Quitting ---"<<endl;
          break;
      }
    
    }
}
//tax finder function 
void taxFinder(){
    system("cls");
        double tax, income = 0;
        int  taxpercentage =0;
        string usename, password; 
        int id; 
        string name; // Use string for name 
        int salary, wage, days;
        int choice, month, annualIncome;
        char continueInput; 
        char another; 
     
        while(true){
            cout << "Login" << endl; 
                     cout << "Enter username: "; 
            cin >> usename; 
                     cout << "Enter password: "; 
            cin >> password; 
             
                     cout << "Login" << endl; 
                     cout << "Enter id: "; 
            cin >> id; 
                  //cout << "Enter usename: ";cin >> name; 
                   //  cout << "Enter Salary:"; cin >> salary; 
                    cout<<" Wage is $:";cin>>wage;
                    cout<<" Day is :"; cin>>days;
                    cout<<" Enter Month :"; cin>>month; 
                    salary = wage * days;
                    annualIncome = salary * month;
                    //cout<<" Your salary in a month is :"<<salary<<"$"<<endl;
                   // float taxmoney = salary * (tax/(float)100);
                    //salary = salary - taxmoney; 
                    //cout << " Main Menu" << endl;
                    //cout<< "choice career:"; cin>>choice; 
                    cout << "1. UX/UI design " << endl; 
                 cout << "2. Stuff namagement " << endl; 
                 cout << "3. Stock management " << endl; 
                 cout << "4. Software Development " << endl; 
                 cout << "5. CyberSecurity " << endl; 
                 cout << "6.AI Development " << endl; 
           //      cout<<" Your salary is :"<<salary<<"$"<<endl;
              //   cout << "0. Exit" << endl; 
      //              if(month <=12){
    //                   annualIncome  = salary * 12;
  //                     cout<<" Annual income is :"<<annualIncome<<"$"<<endl;
//
                //    }else if(month !=13)
              //          cout<<" choice wrong!"<<endl;                     
                    


                

              /*   cout << "1. UX/UI design " << endl; 
                 cout << "2. Stuff namagement " << endl; 
                 cout << "3. Stock management " << endl; 
                 cout << "4. Software Development " << endl; 
                 cout << "5. CyberSecurity " << endl; 
                 cout << "6.AI Development " << endl; 
                 //cout<<" Your salary is :"<<salary<<"$"<<endl;
                 cout << "0. Exit" << endl;*/ 
             
    if (choice != 0) { 
            cout << "\nSelect Your Career (Y/N): "; 
            cin >> continueInput; 
                continueInput = toupper(continueInput); 
            } else { 
                continueInput = 'N'; 
                } 

            switch(choice) { 
                case 1: 
                    // Example placeholder for viewing employees 
                    cout << "UX/UI Design  ." << endl; 
                    break; 
                case 2: 
                    // Example placeholder for viewing employees 
                    cout << "Stuff management ." << endl; 
                    break; 
                case 3: 
                    cout << "Stock management ." << endl; 
                    break; 
                case 4: 
                    cout << "Sotfware Development." << endl; 
                    break;
                case 5: 
                    cout << "CyberSecurity." << endl; 
                    break;
                case 6: 
                    cout << "AI Development ." << endl; 
                    break;
                case 0: 
                    cout << "Exiting the program." << endl; 
                    break; 
                default: 
                    cout << "Invalid choice. Please try again." << endl; 
                    break;

            } 
                cout<<" Your salary is:"<<salary<<"$"<<endl;
                if(month <=12){
                    annualIncome  = salary * 12;
                    cout<<" Annual income is :"<<annualIncome<<"$"<<endl;

                 }else if(month !=13)
                     cout<<" choice wrong!"<<endl; 

       // } while(choice!=0 && choice !=0); 
                        
        cout<<" Enter your annual income: "; cin>>income;
    if (income <= 1500) {
        tax = 0;
        taxpercentage = 0;
    } else if (income > 1500 && income <= 3000) {
       tax = (income - 1500) * 0.05;
        taxpercentage = 5;
    } else if (income > 3000 && income <= 5000) {
        tax = (income - 3000) * 0.10 + 75;
        taxpercentage = 10;
    } else if (income > 5000 && income <= 10000){
        tax = (income - 5000) * 0.15 + 275;
        taxpercentage = 15;
    }else {
      tax =  (income - 10000) * 0.20 + 1025;
        taxpercentage = 20;
    }
   // cout<<" Your annual income in per year : "<<salary * month<<"$"<<endl;
    cout << fixed << setprecision(2);
    cout << "Your tax is: " << taxpercentage<<"%"<< endl;
    cout<<" Tax to be paid : "<<tax<<"$"<<endl;   
 // option to quite the program
 cout << "-------- <<Press any key to continue or 'q' to quit>>--------" << endl;

    cin.ignore();
    
        if (cin.get()=='q' || cin.get()=='Q')
    {
        cout<<" Quitting ---"<<endl;
       
    }
}
        }
//odd/even finder function 

void oddAndEvenFinder()
{
    int n = 0,option = 0;
    while (true)
    {
        system("cls");
        cout << " odd printer " << endl;
        cout << " even printer " << endl;
        cout << " input option :";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << " enter n :";
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 != 0)
                    continue;
                cout << " " << i;
                _sleep(500);
            }
            cout << endl;
            break;
        case 2:
            cout << " enter : ";
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                    continue;
                cout << " " << i;
               _sleep(500);
            }
            cout << endl;
        default:
            cout << "<<<<<Invalid option! Choose again " << endl;
            break;
        }
        cout << " Press any key to continue, key 'Q' to quit " << endl;
        cin.ignore();
        if (cin.get() == 'q' || cin.get()=='Q')
        {
            cout << " Exit the program " << endl;
            break;
        }
    }

}

#include<iostream>
#include<conio.h>

    using namespace std;
    int main(){
system("cls");
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
                op = _getch();
   

        if (op == 1){
            cout<<" continue....."<<endl;
            break;
        }else if ( op == 'Q'||op =='q'){
            cout<<" Quitting...."<<endl;
           break;
        }
       
    }

        return 0;

    }


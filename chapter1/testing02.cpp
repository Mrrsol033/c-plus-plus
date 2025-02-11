#include <iostream>
 using namespace std;
 int main (){
    system ("cls");
    int option = 0;
    float dollar;
    int value = 0;
    cout<<"====[Welcome to star5 restuarent]==="<<endl;
    cout<<" 1. chicken rices  1.5$"<<endl;
    cout <<" 2. fried rices 2$"<<endl;
    cout<< " 3. water 0.5$ "<<endl;
    cout<< "4. coffee 3$ "<<endl;
    cout <<"5. soup 5$ "<<endl;
        cout<<" Choose your options [1-5] :";cin>>option; 
        cout<<" Enter money (usd) :";cin>>dollar;
     cout<<" Dollar = "<<dollar<<"$"<<endl;
        cout<<" KHR = "<<(dollar * 4100)<<"riel"<<endl;
        switch (option){ 
            case 1 : 
                cout<<" chicken is your order ! "<<endl;
                cout<<" price is 1.5$"<<endl;
                
                break; 
            case 2:
                cout<<" fried rices is your order !"<<endl;
                //cout<<" price is 2$ "<<endl;
                break;
            case 3:
                cout <<" water is your order !"<<endl;
                //cout<<" price is 0.5$ "<<endl;
                break;
            case 4:
                cout<<" coffee is your order !"<<endl;
                //cout<<" price is 3$"<<endl;
                break;
            case 5:
                cout<<" soup is your order !  "<<endl;
                //cout<<" price is 5$ "<<endl;
                break;
                default:
                cout<<" Invalid option (choose from 1-5)"<<endl;
                break;
                cout<<" Exit the option please try again !"<<endl;
                break;
        }
         
    return 0;
 }
#include <iostream>

    using namespace std;
    int main(){
 
        system("cls");
        int option;
do{
        cout<<" welcome to Program "<<endl;
        cout<<" 1. Caculator "<<endl;
        cout<<" 2. Tax Finder "<<endl;
        cout<<" 3. Days finder in a Month "<<endl;
        cout<<" 4. Exit "<<endl;
        cout<<" Choose option ( 1 - 4 ):"; cin>>option;
        switch (option){
            case 1:
                cout<<" This is the caculator Program "<<endl;
                break;
            case 2:
                cout<<" This is the Tax finder program "<<endl;
                break;
            case 3:
                cout<< " This is the day finder "<<endl;
                break;
            case 4 :
                cout<<" Exit the progrma ! Have a nice day ! "<<endl;
                break;
            default :
                cout<<" Invalid option ! Choose again from 1 - 4 ! "<<endl;
                break;
        }
}while (option !=4);
    
        return 0;

    }
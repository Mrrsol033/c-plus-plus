#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int option = 0;
    int value;

    cout<<" [+] Choose yoru option ( 1 - 3 ): "<<endl; 
    cin>>option; 
    cout<< " 1. odd/even finder "<<endl;
    cout<<" 2. Money exchange program "<<endl;
    cout<< " 3. exit "<<endl;


    switch (option)
    {
    case 1:
    {
        cout << " odd/even finder program !" << endl;
        cout << " ===odd/evenfinder program ===" << endl;
        cout << "Enter integer number to check : ";
        cin >> value;
        if (value % 2 == 0)
            cout << value << " is even number !" << endl;
        else
            cout << "is odd numder !" << value << endl;
    }
    break;
    case 2:
    {
        cout << " money xechange program !" << endl;
        const float RATE = 4100;
        float usd, riels;
        cout << " enter amount in usd :";
        cin >> usd;
        riels = usd * RATE;
        cout << "exchange result is :" << endl;
        cout << " usd : " << usd << "$" << endl;
        cout << "Riels  :" << riels << "riels" << endl;
    }

    break;
    case 3:
        cout << " exit the program !" << endl;
        break;
    default:
        cout << "invalid option !! choose again from 1 - 3 " << endl;
        break;
    }
               //loop is repeat again and again 
                // loop has three is do, while for,

    return 0;
}
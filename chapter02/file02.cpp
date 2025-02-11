#include <iostream>
using namespace std;

int main()
{
    system("cls");
    // 31 -> 1 , 3 , 5 , 7 , 8 , 10, 12
    // 28,29 -> 2
    // 30 -> the rest
    int month = 0; // 1  - 12
    int days = 0;
    char choise;
    while (true)
    {
        system("cls");
        _sleep(700);
        cout << "[+] Find Day in a Month  [+]" << endl;
        cout << ">>> Enter month to find (1-12): ";
        cin >> month;
        switch (month)
        {
            goto end;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "This is the case 1 " << endl;
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
        case 2:
            days = 28;
            break;
            days = 30;
            break;
            end:
        default:
            break;
        }
        if (month >= 1 && month <= 12)
            cout << "Month = " << month << " Has " << days << " days" << endl;
            
        // option to quite the program
      cout << "-------- <<Press any key to continue or 'q' to quit>>--------" << endl;
        choise = cin.get();
        cin.ignore();
        
              if (cin.get()=='q' || cin.get()=='Q')
        {
            cout<<" Quitting ---"<<endl;
            break;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    system("cls");
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
            cout << " enter n: ";
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
        if (cin.get() == 'q')
        {
            cout << " Exit the program " << endl;
            break;
        }
    }

    return 0;
}
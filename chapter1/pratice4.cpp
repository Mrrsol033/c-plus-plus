#include <iostream>
using namespace std;
int main()
{

    system("cls");

        int value;

    cout << "------- Odd/Even finder ------- " << endl;
    cout << "Enter the value : ";
    cin >> value;
    int resulf = value % 2;
    value % 2;
    if (resulf == 0)
    {
        cout << "number is even !! " << endl;
    }
    else
    {
        cout << " numder is odd !!" << endl;
    }

    return 0;
}
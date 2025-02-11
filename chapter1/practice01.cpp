#include <iostream>
using namespace std;
int main()
{
    system("cls");

    int value;
    cout << "Enter value :";
    cin >> value;
    cout << " print the value " << endl;
    for (int i = 1; i <= 100; i++)
    {
        cout << " " << i<<endl;
        _sleep(500);
    }
    cout << endl;

    return 0;
}

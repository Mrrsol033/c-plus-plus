
#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int age = 0;
    cout << "Enter your age :";
    cin >> age;

    if (age >= 25)
    {
        cout << "you can apply for works !" << endl;
    }
    else
    {
        cout << "you cannot apply for works! " << endl;
    }
    return 0;
}
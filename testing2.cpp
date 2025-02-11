#include <iostream>
using namespace std;
 main()
{
    system("cls");
    const int PASSWORD = 8888;
    int userPassword = 0;
    cout << "Enter your password : ";
    cin >> userPassword;
    if (userPassword != PASSWORD)
    {
        cout << "wrong password " << endl;
    }
    else
    {
        cout << "seccesfully Loogin " << endl;
    }
    return 0;
}
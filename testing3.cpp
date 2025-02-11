#include <iostream>
using namespace std;
int main()
{
    system("cls");
    char gender = 'f';
    int grade = 12;

    cout<<"enter gender :"; cin>>gender;
    cout<<"enter grade :"; cin>>grade;

    if (gender == 'f' || grade == 12)
    {
        cout << " you can apply for scholaship" << endl;
    }
    else
    {
        cout << "you can not apply scholaship" << endl;
    }

    return 0;
}
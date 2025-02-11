#include <iostream>
using namespace std;
int main()
{
    system("cls");
    float score = 0;
    char grade;
    cout << " Enter your score :";cin >> score;
    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }
    else if (score >= 70)
    {
        grade = 'C';
    }
    else if (score >= 60)
    {
        grade = 'D';
    }
    else if (score >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    cout << " your score is :" << score << endl;
    cout << " your grade is :" << grade << endl;

    return 0;
}
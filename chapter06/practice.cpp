#include <iostream>

using namespace std;
// function find grade

char findGrade(float score)
{
    char grade;
    if (score >= 95)
        grade = 'A';
    else if (score >= 85)
        grade = 'B';
    else if (score >= 75)
        grade = 'C';
    else if (score >= 65)
        grade = 'D';
    else if (score >= 50)
        grade = 'E';
    else
        grade = 'F';
        return grade;
}
int main()
{
    system("cls");
    // find infor students

    string stuId, name;
    char gender, grade;
    float scores[5];
    cout << " Enter students ID:";
    cin >> stuId;
    cout<< "-------------------------------------"<<endl;
    cout << " Enter students Name : ";
    cin >> name;
    cout<< "-------------------------------------"<<endl;
    cout << " Enter Students gender: ";
    cin >> gender;
    cout<< "-------------------------------------"<<endl;
    for (int i = 0; i < 5; i++)
    {

        cout << "\tEnter Scores : " << i + 1 << ":";
        cin >> scores[i];
    }
    cout << endl;
    cout<< "-------------------------------------"<<endl;
    float totalScores = 0;

    for (int score : scores)
        totalScores = totalScores + score;

    float average = totalScores / 5;
    for (int score : scores)
        cout << " " << score;

        system("cls");
    cout << " ------------->[ Information Students ]<---------------" << endl;
    //   output infor students
    cout<< "-------------------------------------"<<endl;
    cout << " Students ID : " << stuId << endl;
    cout<< "-------------------------------------"<<endl;
    cout << " Students name : " << name << endl;
    cout<< "-------------------------------------"<<endl;
    cout << " Students gender : " << gender << endl;
    cout<< "-------------------------------------"<<endl;
    cout << " Students Total scores : " << totalScores << endl;
    cout<< "-------------------------------------"<<endl;
    cout << " Average Students Scores : " << average << endl;
    cout<< "-------------------------------------"<<endl;
    cout << " Students Grade : " << findGrade(average) << endl;
    cout<< "-------------------------------------"<<endl;
    cout << " Students Results : " << ((findGrade(average) == 'F') ? " Failed" : " Passed ") << endl;
    cout<< "-------------------------------------"<<endl;
    return 0;
}
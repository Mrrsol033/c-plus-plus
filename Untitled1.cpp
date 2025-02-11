#include <iostream>
using namespace std;
int main()
{
    system("cls");
    string studentName;
    char gender;
    float math, phisic, bio;
    float attendant;
    cout << "========Input Student Infor======" << endl;
    cout << " Enter Student Name : "; cin >>studentname;
    cout << " Enter Student Gender : "; cin >> gender;
    cout << " Enter Student Scores : ";<<endl;
    cout << " \tEnter Math score : "; cin >> math;
    cout << " \tEnter phisic score : ";cin >> phisic;
    cout << " \tEnter Bio score : "; cin >> bio;
    cout << " \tEnter attendant score(max=10): "; cin >> attendant;
    float total = math + phisic + bio;
    float avg = total / 3;
    float subjactscore = (avg * 90) / 100;
    float totalaverage = subjactscore + attendant;
    cout << " =========Output Student Infor==========" << endl;
    cout < " Student Name is : " <<studentName << endl;
    cout << " Student Gender is : " << gender << endl;
    cout << "Student Suject Score(90%) :" << subjactscore << endl;
    cout << "Student attendant score :" << attendant << endl;
    cout << " Student Average is(100%) : " << totalaverage << endl;
    if (totalaverage < 50)
    {
        cout << "Student had failed the exam!" << endl;
    }
    else
    {
        cout << "Student had passed the exam!" << endl;
    }
    return 0;
}

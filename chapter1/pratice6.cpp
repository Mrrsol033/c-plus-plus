#include <iostream>
using namespace std;

int main() {
    system("cls");
    string studentName;
    char gender;
    float math, physics, bio;
    float attendant;

    cout << "========Input Student Info======" << endl;
    cout << " Enter Student Name: ";
    cin >> studentName;
    cout << " Enter Student Gender: ";
    cin >> gender;
    cout << " Enter Student Scores: " << endl;
    cout << " \tEnter Math score: ";
    cin >> math;
    cout << " \tEnter Physics score: ";
    cin >> physics;
    cout << " \tEnter Bio score: ";
    cin >> bio;
    cout << " \tEnter attendant score (max=10): ";
    cin >> attendant;

    float total = math + physics + bio;
    float avg = total / 3;
    float subjectScore = (avg * 90) / 100;
    float totalAverage = subjectScore + attendant;

    cout << " =========Output Student Info==========" << endl;
    cout << " Student Name is: " << studentName << endl;
    cout << " Student Gender is: " << gender << endl;
    cout << " Student Subject Score (90%): " << subjectScore << endl;
    cout << " Student attendant score: " << attendant << endl;
    cout << " Student Average is (100%): " << totalAverage << endl;

    if (totalAverage < 50) {
        cout << "Student has failed the exam!" << endl;
    } else {
        cout << "Student has passed the exam!" << endl;
    }

    return 0;
}

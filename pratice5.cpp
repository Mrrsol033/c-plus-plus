
// program calulate score of the student
// input : studentName, gender,
//          math, phisic , bio (100)

// total score , avg
// show all info
// if avg<50 -> show message Student Failed
#include <iostream>
using namespace std;

int main()
{
    system("cls");

    string studentName;
    char gender;
    float math, physic, bio, attendant;

    cout << "=========== Input Student Info ===========" << endl;
    cout << "Enter Student Name: ";
    cin >> studentName;
    cout << "Enter Student Gender: ";
    cin >> gender;
    cout << "Enter Student Scores: " << endl;
    cout << "\tMath Score:";
    cin >> math;
    cout << "\tEnter Physic Score:";
    cin >> physic;
    cout << "\tEnter Bio Score : ";
    cin >> bio;
    cout << "\tEnter attendant Score (max=10): ";
    cin >> attendant;
    float tatol = math + physic + bio;
    float avg = tatol / 3;
    avg = (avg * 90) / 100;
    avg = avg + attendant;

    cout << "\n=========== Output Student Info ===========" << endl;
    cout << "Student Name is : " << studentName << endl;
    cout << "Student Gender is : " << gender << endl;
    cout << "Student Total Score: "<< total << endl;
    cout << "Student Average is: " << avg << endl;
    // failed or passed !
    if (avg < 50)
    {
        cout << "Student has falied the exam!" << endl;
    }
    else
    {
        cout << "Student has passed the exam!" << endl;
    }
    return 0;
}

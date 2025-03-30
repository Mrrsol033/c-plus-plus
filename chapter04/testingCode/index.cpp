#include <iostream>
using namespace std;
void exchangeMoney();
void workerSalary();
void sumMul();

int main()
{
while (true)
{



    void alculator();
    void workerSalary();
    void sumMul();
    cout << " 1. Money exchange program " << endl;
    cout << " 2. Working salary " << endl;
    cout << " 3. Sum/Mul progrma " << endl;
    cout << " 4. Exit the program " << endl;
    int choice;
    cout<<"Choices Option : "; cin>>choice;
    switch (choice)
    {
    case 1:
    void exchangeMoney();
        break;
    case 2:
    void workerSalary();
        break;
    case 3:
    void sumMul();
        break;
    case 4:
        cout << " Exit the program " << endl;
        break;
    default:
        cout << " Invalid the program" << endl;
        break;
    }
    return 0;
}
}
void exchangeMoney(){
    bool isUSDToKHR;
    float amount;
    cout<<"Enter amount to exchange : "; 
cin>>amount; 
    string currency = (isUSDToKHR)?"$": "riels";
    cout<<"Enter amount ("<<currency<<" ):";
    cin>>amount;
    cout<<"Amount = "<<amount<<currency<<endl;
    if (isUSDToKHR==true){
        amount * 4000;
    }else {
        amount / 4000;
    }
}

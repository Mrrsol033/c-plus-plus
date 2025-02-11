#include<iostream>

using namespace std;

int main(){
    system("cls");
    int value1 = 0;
     int value2 = 0;
     int max = 0;
     cout<<"enter the first value :"; cin>>value1;
     cout<<"enter the second value :"; cin>>value2;

    cout<<"max is :" <<((value1 > value2)? value1:value2)<<endl;
    

    return 0;
}
//loop is repeat again and again 
// loop has three is for,
//expressioon 
//int i = 1 is inital step
// i<= 10 condition to continue the loop 
// i++ update expression 
//infinite loop
//

#include <iostream>
    using namespace std;
    int main (){
        system ("cls");

        int value; 
    cout<<"enter the value :"; cin>>value;
    cout<<" Print only odd number (1 - 10): " <<endl;
    for ( int i =1; i <=10; i++){
        if ( i % 2 == 0){
            cout<<" "<< i;
        }
    }
        cout<<endl;
        cout<< "print only even number :"<<endl;
        for ( int i =1 ; i <= value ; i+=2){
            cout<<" "<< i;
        }
    cout<<endl;
    

        return 0;
    }
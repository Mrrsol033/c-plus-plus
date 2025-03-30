#include<iostream>

using namespace std;
 int main (){
        system("cls");
    int values[]={10, 20,30 ,40,50,60,70,80,90,100};
    int totalElement= sizeof(values) / sizeof(values[0]);
        cout<<"Total size : " <<sizeof(values)<<"bytes "<<endl;
        cout<<"single size :" <<sizeof(values[0])<<"bytes"<<endl;
    cout<<"All the element"<<endl;
    for (int i =0; i <10; i++){
        cout<<" "<<values[i];
       

    }
    
    cout<<endl;




    return 0;
 }
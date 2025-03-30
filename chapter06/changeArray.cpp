#include <iostream>
#include<algorithm>
using namespace std;
// using algorithm 
void printArray (int arr[], int size){
    for (int i=0; i <size; i ++ ){
    cout<<" "<<arr[i];

}
cout<<endl;

}
int main()
{
    system("cls");
    int value[] = {45, 34, 7, 30, 5, 74, 26, 34, 95, 24};
    int size = sizeof(value) / sizeof(*value);
    cout << " The size of value is : " << size << endl;
    cout<<" The value Before : "<<endl;
    printArray(value, size);


    int values;
    cout<<" Enter the value to update : ";
     cin >>values;

     bool isFound = false;
     for ( int i =0; i <size; i ++)
    {
        if(values == value[i]){
            isFound = true; 
            cout<<" Element Found at index : "<<i<<endl;
            cout<<" Enter New value to update : ";
            cin>>value[i];

        }
    }
    if(isFound){
        cout<<" Can not found the Array ! "<<endl;
    }
    cout<<" After update the value : "<< endl;
    printArray(value, size);
    return 0;
}
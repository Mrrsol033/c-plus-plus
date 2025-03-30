#include <iostream>
#include<algorithm>

using namespace std;
    //using
void printArray( int arr[], int size, string message){
    cout<<message<<endl;
    for (int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

}



 int main(){
    system ("cls");


    int scores []={23,57,53,49,56,36,32,94};
    int size = sizeof(scores) / sizeof(*scores);
    printArray(scores, size , " [+] Array before update :");
    sort(scores, scores+ size);
    printArray(scores, size, " [+] Array after update :");



    return 0;
 }
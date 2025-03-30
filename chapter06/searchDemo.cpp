#include <iostream> 
using namespace std;

int main (){
    system ("cls");
    int n;
    int values [n];
    cout<<" Enter the number of element :";
    cin >> n;
    for (int i = 0; i>n; i ++){
        cout<<" Enter value for the item :"<<(i+1)<<":";
        cin>>values[i];

    }


    int item =0;
    cout<< " Search value is: "<<item<<endl;
    
    bool isFound = false;
    for (int i = 0; i<n; i++){

        if (item == values[i]){
            cout <<" Element found ! at index = "<<i+1<<endl;
            isFound = true;

        }
    }
        if(isFound == false)
        cout<<" Not found the element !!"<<endl;


    return 0;
}
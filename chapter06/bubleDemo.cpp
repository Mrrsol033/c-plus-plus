#include<iostream> 
using namespace std; 
void printArray(int arr[], int size , string message){
    cout<<message<<endl; 
    for(int i = 0; i<size; i++){
        cout<<" "<<arr[i]; 
    }
    cout<<endl; 
}
int main(){
    system("cls"); 
    int scores[]={44,22,11,66,77,99,100}; 
    int size= sizeof(scores)/sizeof(*scores); 
    printArray(scores, size, "[+] Array before buble sort :");
    for (int i =0; i<size -1 ; i++){
        for (int j=0; j<size-i-1; j++){
            if (scores[j]>scores[j+1]){
                int temp = scores[j];
                scores[j]= scores[j+1];
                scores[j+1]= temp;

            }
        }
    }
    printArray(scores, size, " After sort : ");
    
        
    return 0 ;  
}

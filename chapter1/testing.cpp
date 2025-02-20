#include <iostream> 
#include <string> 
using namespace std; 
 
 
int main()
{ 
    string usename, password; 
    int id; 
    string name; // Use string for name 
    int salary; 
    int choice; 
    char continueInput; 
    char another; 
 
    do{ 
        cout << "Login" << endl; 
                 cout << "Enter username: "; 
        cin >> usename; 
                 cout << "Enter password: "; 
        cin >> password; 
         
                 cout << "Login" << endl; 
                 cout << "Enter id: "; 
        cin >> id; 
              cout << "Enter usename: "; 
        cin >> name; 
                 cout << "Enter Salary: "; 
        cin >> salary; 
 
                 cout << " Main Menu" << endl; 
             cout << "1. Add a new employee" << endl; 
                 cout << "2. View all the employees" << endl; 
             cout << "3. Update employees" << endl; 
                 cout << "4. Delete employee" << endl; 
        cout << "5. Find the highest salaries and lowest salaries" << endl; 
             cout << "6. Sort employees by id" << endl; 
        cout << "0. Exit" << endl; 
         
if (choice != 0) { 
        cout << "\nDo you want to input another (Y/N): "; 
        cin >> continueInput; 
            continueInput = toupper(continueInput); 
        } else { 
            continueInput = 'N'; 
            } 
        cout << "Enter choice:"; 
        cin >> choice; 
 
        switch(choice) { 
            case 1: 
                // Example placeholder for viewing employees 
                cout << "Add a new employee ." << endl; 
                break; 
            case 2: 
                // Example placeholder for viewing employees 
                cout << "View all the employees." << endl; 
                break; 
            case 3: 
                cout << "Update employees." << endl; 
                break; 
            case 4: 
                cout << "Delete employee." << endl; 
                break; 
            case 5: 
                cout << "Finding highest and lowest salaries." << endl; 
                break; 
            case 6: 
                cout << "Sorting employees by id." << endl; 
                break; 
            case 0: 
                cout << "Exiting the program." << endl; 
                break; 
            default: 
                cout << "Invalid choice. Please try again." << endl; 
        } 
 
    } while(choice!=0 && choice !=0); 
     
    return 0; 
}
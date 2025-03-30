#include <iostream>
using namespace std;

void printLogo()
{
    cout << "------------logo----------" << endl;
    cout << " ____                                             ___  _ " << endl;
    cout << " |  _ \\ _ __ ___   __ _ _ __ __ _ _ __ ___        / _ \\/ |" << endl;
    cout << " | |_) | '__/ _ \\ / _` | '__/ _` | '_ ` _ \\ _____| | | | |" << endl;
    cout << " |  __/| | | (_) | (_| | | | (_| | | | | | |_____| |_| | |" << endl;
    cout << " |_|   |_|  \\___/ \\__, |_|  \\__,_|_| |_| |_|      \\___/|_|" << endl;
    cout << "                  |___/                                   " << endl;
}

void printMenu()
{
    cout << " 1. Money exchange program " << endl;
    cout << " 2. Working salary " << endl;
    cout << " 3. Sum/Mul program " << endl;
    cout << " 4. Students Scores " << endl;
    cout << " 5. Exit the program " << endl;
}

float exchangeUSDKHR(bool isUSDToKHR)
{
    float amount;
    string currency = (isUSDToKHR) ? "$" : "riels";
    cout << "Enter amount (" << currency << " ): ";
    cin >> amount;

    if (isUSDToKHR)
    {
        return amount * 4000;
    }
    else
    {
        return amount / 4000;
    }
}

void pressEntertoContinue()
{
    cout << "=====Press Enter to continue, q to quit=====" << endl;
    cin.ignore();
    cin.get();
    if (cin.get() == 'q' || cin.get() == 'Q')
    {
        cout << " Exit the program " << endl;
    }
}

double findSalary(float hour, float wage, char gender)
{
    float salary = hour * wage;
    float tax = (salary >= 1000) ? ((gender == 'm') ? 0.5 : 0.7) : 1;
    return salary * tax;
}

void performAddition(float number1, float number2)
{
    cout << "Result of addition: " << (number1 + number2) << endl;
}

void performMultiplication(float number1, float number2)
{
    cout << "Result of multiplication: " << (number1 * number2) << endl;
}

void printArray(int array[], int size)
{
    cout << "Lenght is :" << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << " " << array[i];
    }
    cout << endl;
}
int main()
{
    int option;
    do
    {
        system("cls");
        printLogo();
        printMenu();

        cout << "Choice your option (1 - 4): ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            system("cls");
            int op;
            float result;
            cout << "[Money Exchange]" << endl;
            cout << " 1. Exchange from USD -> KHR" << endl;
            cout << " 2. Exchange from KHR -> USD" << endl;
            cout << " 3. Exit the program " << endl;
            cout << "Choice type of exchange: ";
            cin >> op;

            if (op == 1)
            {
                result = exchangeUSDKHR(true);
                cout << "Result = " << result << " riels" << endl;
            }
            else if (op == 2)
            {
                result = exchangeUSDKHR(false);
                cout << "Result = " << result << " $" << endl;
            }
            else if (op == 3)
            {
                cout << "Exit the program" << endl;
                break;
            }
            else
            {
                cout << "Invalid option! Choose again (1 - 3)" << endl;
            }
        }
            pressEntertoContinue();
            break;

        case 2:
        {
            while (true)
            {
                system("cls");
                string name;
                char gender;
                float wage, hour;
                cout << "----- Input -----" << endl;
                cout << "Enter your name: ";
                cin >> name;
                cout << "Enter your gender (m/f): ";
                cin >> gender;
                cout << "Enter your hours: ";
                cin >> hour;
                cout << "Enter your wage: ";
                cin >> wage;

                cout << "----- Output -----" << endl;
                cout << "Your name is: " << name << endl;
                cout << "Your gender is: " << gender << endl;
                cout << "Your hours: " << hour << endl;
                cout << "Your wage is: " << wage << "$" << endl;
                cout << "Your salary is: " << findSalary(hour, wage, gender) << "$" << endl;
                pressEntertoContinue();
            }
        }
        break;

        case 3:
        {
            system("cls");
            float number1, number2;
            int operation;

            cout << "[Sum/Mul Program]" << endl;
            cout << "Enter the first number: ";
            cin >> number1;
            cout << "Enter the second number: ";
            cin >> number2;

            cout << "Choose operation:" << endl;
            cout << " 1. Addition" << endl;
            cout << " 2. Multiplication" << endl;
            cout << " 3. Coefficient " << endl;
            cout << "Your choice (1 or 2): ";
            cin >> operation;

            if (operation == 1)
            {
                performAddition(number1, number2);
            }
            else if (operation == 2)
            {
                performMultiplication(number1, number2);
            }
            else
            {
                cout << "Invalid operation choice!" << endl;
            }
        }
            pressEntertoContinue();
            break;

        case 4:
        {
            system("cls");
            // int students[5];
            // cout << " [ Input scores ]" << endl;
            // for (int i = 0; i < 5; i++)
            // {
            //     cout << "Enter students " << (i + 1) << +":";
            //     cin >> students[i];
            // }
            // cout << "[ output thestudents ]" << endl;
            // for (int i = 0; i < 5; i++)
            // {
            //     cout << " students" << (i + 1) << ":" << students[i] << endl;
            // }

            // int value[5];
            // int scores[] = {34, 345, 4345, 3234, 323, 33, 323, 25, 32};
            // int numbers[6] = {23, 35, 33, 532, 53};

            // int length = sizeof(scores) / sizeof(scores[0]);
            // printArray(scores, length);

            // int lenghtOfnumber = sizeof(numbers) / sizeof(numbers[0]);
            // printArray(numbers, lenghtOfnumber);

            int n;
            cout << "Enter the number of value(n):";
            cin >> n;
            int values[n];
            for (int i = 0; i < n; i++)
            {
                cout << "Enter value[" << i + 1 << "]:";
                cin >> values[i];
            }
            printArray(values, n);
            // int scoreses[5];
            // scoreses[0] = 15;
            // scoreses[1] = 50;
            // cout << "first element is " << scoreses[0] << endl;
            // cout << "secord element is: " << scoreses[1] << endl;
            pressEntertoContinue();
        }

        case 5:
            cout << "Exiting the program" << endl;
            break;

        default:
            cout << "Invalid option! Choose again (1 - 4)" << endl;
            pressEntertoContinue();
            break;
        }
    } while (option != 4);

    return 0;
}

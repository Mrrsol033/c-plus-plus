#include <iostream>
using namespace std;

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
    system("cls");
    int students[5];
    cout << " [ Input scores ]" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter students " << (i + 1) << +":";
        cin >> students[i];
    }
    cout << "[ output thestudents ]" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << " students" << (i + 1) << ":" << students[i] << endl;
    }

    int value[]={};
    int scores[] = {34, 345, 4345, 3234, 323, 33, 323, 25, 32};
    int numbers[] = {23, 35, 33, 532, 53};

    int length = sizeof(scores) / sizeof(scores[0]);
    printArray(scores, length);

    int lenghtOfnumber = sizeof(numbers) / sizeof(numbers[0]);
    printArray(numbers, lenghtOfnumber);

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
    int scoreses[5];
    scoreses[0] = 15;
    scoreses[1] = 50;
    cout << "first element is " << scoreses[0] << endl;
    cout << "secord element is: " << scoreses[1] << endl;
    return 0;
}
#include <iostream>
using namespace std;
int sumV1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int sumV2(int n)
{
    if (n == 0)
        return 0;
    return n + sumV2(n - 1);
}

int main()
{

    system("cls");
    cout << "Sum from 1 -> 5 :" << sumV1(5) << endl;
    cout << "Sum from 1 -> 5 :" << sumV2(5) << endl;
    return 0;
}
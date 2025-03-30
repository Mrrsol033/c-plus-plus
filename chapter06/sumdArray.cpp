#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int scores[] = {12, 31, 22, 42, 43, 24, 34, 75};
    int size = sizeof(scores) / sizeof(*scores);
    cout << " Size of score is : " << size << endl;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (scores[i] % 2 == 0)
            sum += scores[i];
    }
    cout << " Sum of scores is :" << sum << endl;
    int total = 0;
    for (int score : scores)
    {
        total = total + score;
    }
    cout << " Sum of score using for each is : " << total << endl;

    cout << " Print reverse order ! " << endl;
    for (int i = size - 1; i >= 0; i--)
        cout << " " << scores[i];
    cout << endl;
    int max = scores[0];
    for (int score : scores)
        if (score > max)
            max = score;
    cout << " Max is : " << max << endl;

    for (int i = 0; i < size; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
            cout << " max is : " << max << endl;
        }
    }
    int min = scores[0];
    for (int score : scores)
        if (score < max)
            max = score;
    cout << " Min is : " << min << endl;

    return 0;
}

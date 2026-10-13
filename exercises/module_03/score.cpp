#include <iostream>

using namespace std;

int main()
{
    int score = 0;
    cout << "Enter your score:";
    cin >> score;
    if (score >= 0 && score <= 100)
    {
        if (score >= 60 && score < 90)
        {
            cout << "you passed but not with excellent." << endl;
        }
        else if (score >= 90)
        {
            cout << " Excellent performance." << endl;
        }
        else if (score >= 60)
        {
            cout << "you falied" << endl;
        }
        else
        {
            cout << "Invalid score";
        }
    }
}

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer and I will tell you if it is odd or even: ";
    cin >> number;

    if (number % 2 == 1)
    {
        cout << number << " is odd." << endl;
    }
    else
    {
        cout << number << " is even." << endl;
    }

    return 0;
}

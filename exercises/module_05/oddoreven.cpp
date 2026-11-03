#include <iostream>

using namespace std;

int main()
{
    int num;
    while (true)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num == 0)
        {
            cout << "exit...";
            break;
        }
        if (num % 2 == 0)
        {
            cout << "Even\n";
        }
        else
        {
            cout << "odd\n";
        }
    }
}

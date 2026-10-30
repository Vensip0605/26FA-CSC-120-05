#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int total = 0;
    while (true)
    {
        cout << "num = " << num << "\n";
        total += num % 10;
        num /= 10;
        if (num == 0)
        {
            break:
        }
    }

    cout << "total: " << total << endl;
}

#include <iostream>

using namespace std;

int main()
{
    int min, max;
    cout << "Enter min number:";
    cin >> min;
    cout << "Enter max number:";
    cin >> max;
    for (int i = min; i <= max; i += 2)
    {
        cout << i * i << " ";
    }
    cout << endl;
}

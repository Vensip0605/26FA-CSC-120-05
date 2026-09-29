#include <iostream>

using namespace std;

int main()
{
    double c, f;
    cout << "Enter temperature in f:";
    cin >> f;

    c = (f - 32) * 5 / 9;

    cout << f << "F =" << c << "c!" << endl;
    return 0;
}

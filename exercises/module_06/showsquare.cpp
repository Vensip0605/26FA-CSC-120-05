#include <iostream>

using namespace std;

void showsquare(int num)
{
    cout << "The square of " << num << " is " << num * num << endl;
}

int main()
{
    showsquare(5);
    showsquare(8);
    showsquare(14);
    return 0;
}

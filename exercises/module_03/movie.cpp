#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    if (age < 5)
    {
        cout << "your ticket price is free:";
    }
    else if (age <= 12)
    {
        cout << "your ticket price is : $5";
    }
    else if (age <= 17)
    {
        cout << " your ticket price is : $7";
    }
    else if (age <= 64)
    {
        cout << " your ticket price is : $10";
    }
    else
    {
        cout << " your ticket price is : $6";
    }
    return 0;
}

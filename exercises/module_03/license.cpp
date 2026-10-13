#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;

    bool hasLicense = false;
    cout << " Do you have a license (1 = yes; 0 = no)";
    cin >> hasLicense;
    cout << "age:" << age << ";  has license :" << hasLicense << endl;

    if (age >= 18 && hasLicense)
    {
        cout << "You are allowed to drive.";
    }
    else
    {
        cout << "You are not allowed to drive.";
    }
    return 0;
}

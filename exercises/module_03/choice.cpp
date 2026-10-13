#include <iostream>
using namespace std;

int main()
{
    int choice;

    // Display menu
    cout << "Menu:\n";
    cout << "1. Add two numbers\n";
    cout << "2. Subtract two number\n";
    cout << "3. Multiply two number\n";
    cout << "4. Divide two number" cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "!" << endl;
    }
    else if (choice == 2)
    {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Sum: " << (a + b) << endl;
    }
    else if (choice == 3)
    {
        cout << "Exiting program." << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

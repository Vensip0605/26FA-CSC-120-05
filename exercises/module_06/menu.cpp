#include <iostream>

using namespace std;

void showmenu()
{
    cout << "0. Exit\n";
    cout << "1. Add two numbers\n";
    cout << "2. subtract two numbers\n";
    cout << "3. multiply two numbers\n";
}
void addnumbers(int num1, int num2)
{
    cout << "The sum of " << num1 << "and" << num2 << "is" << (num1 + num2) << "\n ";
}
void subtractnumbers(int num1, int num2)
{
    cout << "The diffrence between " << num1 << "and" << num2 << "is" << (num1 - num2) << "\n ";
}
void multiplynumbers(int num1, int num2)
{
    cout << "The multipl of " << num1 << "and" << num2 << "is" << (num1 * num2) << "\n ";
}

int main()
{
    int choice;
    do
    {
        showmenu();
        cout << "Enter an option: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
        {
            int num1, num2;
            cout << "Enter two numbers with space in between: ";
            cin >> num1 >> num2;

            if (choice == 1)
            {
                addnumbers(num1, num2);
            }
            else if (choice == 2)
            {
                subtractnumbers(num1, num2);
            }
            else
            {
                multiplynumbers(num1, num2);
            }
        }
        else if (choice != 0)
        {
            cout << "Invalid choice.\n";
        }

    } while (choice != 0);
}

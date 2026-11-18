#include <iostream>
#include <string>
using namespace std;

int main()
{

    int choice;
    do
    {
        cout << "Base Conversion program\n";
        cout << "1. Convert Binary to Decimal\n";
        cout << "2. Convert Decimal to Binary\n";
        cout << "3. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice == 1)
        {
            string binary;
            cout << "Enter a binary number: ";
            cin >> binary;
            if (binary.find_first_not_of("01") != string::npos)
            {
                cout << "Error : " << binary << " is not a valid binary number. " << endl;
            }
            else
            {
                int decimal = 0;
                for (int i = 0; i < binary.length(); i++)
                {
                    decimal = decimal * 2 + (binary[i] - '0');
                }
                cout << "Decimal : " << decimal << endl;
            }
        }
        else if (choice == 2)
        {
            int decimal;
            cout << "Enter a decimal number (0-15): ";
            cin >> decimal;

            if (decimal < 0 || decimal > 15)
            {
                cout << "Error: Decimal number must be between 0 and 15." << endl;
            }
            else
            {
                string binary = " ";
                int temp = decimal;
                for (int i = 0; i < 4; i++)
                {
                    binary = to_string(temp % 2) + binary;
                    temp = temp / 2;
                }

                cout << "Binary: " << binary << endl;
            }
        }

        else if (choice == 3)
        {
            cout << "Goodbye!" << endl;
        }

        else
        {
            cout << "Error: Invalid menu choice." << endl;
        }
    } while (choice != 3);
    return 0;
}

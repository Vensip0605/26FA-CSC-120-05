#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "==========================\n";
    cout << "   Base Conversion program\n";
    cout << "=========================\n";
    cout << "1. Convert Binary to Decimal\n";
    cout << "2. Convert Decimal to Binary\n";
    cout << "3. Exit\n";
    cout << "----------------------------\n";

    int choice;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1)
    {
        string binary;
        cout << "Enter a binary number: ";
        cin >> binary;
        if (binary.length() != 4 ||
                               binary.find_first_not_of("01") != string::npos)
        {
            cout << "Error : Binary numbers can only contain 0s and 1s. " << endl;
        }
        else
        {
            int decimal;
            if (binary == "0000")
                decimal = 0;
            else if (binary == "0001")
                decimal = 1;
            else if (binary == "0010")
                decimal = 2;
            else if (binary == "0011")
                decimal = 3;
            else if (binary == "0100")
                decimal = 4;
            else if (binary == "0101")
                decimal = 5;
            else if (binary == "0110")
                decimal = 6;
            else if (binary == "0111")
                decimal = 7;
            else if (binary == "1000")
                decimal = 8;
            else if (binary == "1001")
                decimal = 9;
            else if (binary == "1010")
                decimal = 10;
            else if (binary == "1011")
                decimal = 11;
            else if (binary == "1100")
                decimal = 12;
            else if (binary == "1101")
                decimal = 13;
            else if (binary == "1110")
                decimal = 14;
            else
                decimal = 15;
            cout << "The decimal equivalent of"
                 << binary << " is " << decimal << " . " << endl;
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
            string binary;

            if (decimal == 0)
                binary = "0000";
            else if (decimal == 1)
                binary = "0001";
            else if (decimal == 2)
                binary = "0010";
            else if (decimal == 3)
                binary = "0011";
            else if (decimal == 4)
                binary = "0100";
            else if (decimal == 5)
                binary = "0101";
            else if (decimal == 6)
                binary = "0110";
            else if (decimal == 7)
                binary = "0111";
            else if (decimal == 8)
                binary = "1000";
            else if (decimal == 9)
                binary = "1001";
            else if (decimal == 10)
                binary = "1010";
            else if (decimal == 11)
                binary = "1011";
            else if (decimal == 12)
                binary = "1100";
            else if (decimal == 13)
                binary = "1101";
            else if (decimal == 14)
                binary = "1110";
            else
                binary = "1111";

            cout << "The binary equivalent of "
                 << decimal << " is " << binary << "." << endl;
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

    cout << "Program finished." << endl;

    return 0;
}

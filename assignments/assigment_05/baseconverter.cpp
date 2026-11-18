#include <iostream>
#include <string>
using namespace std;

void showMenu()
{
    cout << "Base Conversion program\n";
    cout << "1. Convert Binary to Decimal\n";
    cout << "2. Convert Decimal to Binary\n";
    cout << "3. Exit\n";
}
int getMenuChoice()
{
    cout << "Enter your choice (1-3): ";
    cin >> choice;
}

int main()
{
    showMenu();
}

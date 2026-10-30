#include <iostream>

using namespace std;

int main()
{
    cout << "Customer Support Menu\n";
    cout << "_____________\n";
    cout << "1. billing\n";
    cout << "2. technical support\n";
    cout << "3. acoount management\n";
    cout << "4. exit\n";

    int choice = 0;
    cin >> choice;

    if (choice < 1 || choice > 4)
    {
        cout << "Invalid menu option. please restart the program." << endl;
    }
    else
    {
        switch (choice)
        {

        case 1:
            cout << "You selected Billing. please wait while we connect you.\n";
            break;
        case 2:
            cout << "You selected Technical Support. our specialists are avaliable 24/7.\n";
            break;
        case 3:
            cout << "You selected Account Management.we'll help you update your information.\n";
            break;
        case 4:
            cout << "Exiting program. Goodbye!\n";
            break;
        defult:
            cout << "Invalid menu option.please restart the program.\n";
        }
    }

    if (choice >= 1 && choice <= 1)
    {
        cout << " would you like to speak to a live agernt ? (y/n):";
        char agentChoice = '\n';
        cin >> agentChoice;
        if (agentChoice == 'Y' || agentChoice == 'Y')
        {
            cout << "Connecting you to a live agent...\n";
        }
        else if (agentChoice == 'N' || agentChoice == 'n')
        {
            cout << "Thank you for using our automated assistant.\n";
        }
        else
        {
            cout << "Invalid input. Please restart the program.\n";
        }
    }
}

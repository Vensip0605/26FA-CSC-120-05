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

    int choice;
    cin >> choice;

    if (choice < 1 || choice > 4)
    {
        cout << "Invalid menu option. please restart the program." << endl;
    }
    else if (choice == 4)
    {
        cout << "Exiting program. Goodbye!" << endl;
    }
    else
    {
        if (choice == 1)
        {
            cout << "You selected Billing. please wait while we connect you." << endl;
        }
        else if (choice == 2)
        {
            cout << "You selected Technical Support. our specialists are avaliable 24/7." << endl;
        }
        else if (choice == 3)
        {
            cout << "You selected Account Management.we'll help you update your information." << endl;
        }
        cout << "Would you like to speak to a live agent? (Y/N):";
        char liveAgentChoice = "";
        cin >> liveAgentChoice;
        if (liveAgentChoice 'Y' || liveAgentChoice = 'Y')
        {
            cout « "Connecting you to a live agent..." « endl; else if (liveAgentChoice == "N' || liveAgentChoice == "n') ( cout « "Thank you for using our automated assistant." « endl;
        }
        else if (liveAgentChoice 'N' || liveAgentChoice = 'N')
        {
        }
        else (
         cout « "Invalid input. Please restart the program." « endl;

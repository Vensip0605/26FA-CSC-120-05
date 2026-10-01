#include <iostream>

using namespace std;

int main()
{
    double mealcost;
    double taxrate;
    double tiprate;
    cout << " Enter the meal cost: ";
    cin >> mealcost;
    cout << " Enter the tax rate (as a percentage): ";
    cin >> taxrate;
    cout << " Enter the tip rate (as a percentage): ";
    cin >> tiprate;
    cout << " Meal Cost: $" << mealcost << endl;
    double taxamount = mealcost * (taxrate / 100);
    cout << " Tax Amount: $" << taxamount << endl;
    double tipamount = (mealcost + taxamount) * (tiprate / 100);
    cout << " Tip Amount: $" << tipamount << endl;
    double totalbill = mealcost + taxamount + tipamount;
    cout << " Total Bill: $" << totalbill << endl;
    return 0;
}

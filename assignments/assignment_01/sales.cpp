#include <iostream>

using namespace std;

int main()
{
    double totalsales;
    double eastcoastpercentage;
    cout << "Enter the total annual sales:";
    cin >> totalsales;
    cout << "Enter the percentage of sales from the East Coast division:";
    cin >> eastcoastpercentage;
    double divisionsales = totalsales * (eastcoastpercentage / 100);
    cout << " East Coast Division Sales : $ " << divisionsales << endl;

    return 0;
}

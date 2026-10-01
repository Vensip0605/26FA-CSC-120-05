#include <iostream>

using namespace std;

int main()
{
    double purchaseprice;
    double statesalestaxrate;
    double countysalestaxrate;
    cout << " Enter the purchase price :";
    cin >> purchaseprice;
    cout << " Enter the state sales tax rate (as a percentage) :";
    cin >> statesalestaxrate;
    cout << " Enter the county sales tax rate (as a percentage):";
    cin >> countysalestaxrate;
    double statetax = purchaseprice * (statesalestaxrate / 100);
    cout << " State Tax:$" << statetax << endl;
    double countytax = purchaseprice * (countysalestaxrate / 100);
    cout << " County Tax:$" << countytax << endl;
    double totaltax = statetax + countytax;
    cout << " Total Tax:$" << totaltax << endl;
    double totalpurchaseprice = purchaseprice + totaltax;
    cout << " Total Purchase Price: $" << totalpurchaseprice << endl;
    return 0;
}

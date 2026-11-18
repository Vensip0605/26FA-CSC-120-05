#include <iostream>

using namespace std;
void logActivity(double miles, double &calories, int &minutes)
{
    calories = miles * 100;
    minutes = miles * 10;
}

int main()
{
    double calories = 0.0;
    int minutes = 0;
    logActivity(2.5, calories, minutes);
    cout << "Burned " << calories << " calories in " << minutes << " minutes.\n";
    logActivity(3.5, calories, minutes);
    cout << "Burned " << calories << " calories in " << minutes << " minutes.\n";
}

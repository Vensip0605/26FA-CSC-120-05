#include <iostream>

using namespace std;

int main()
{
    double gpa;
    cout << "Enter GPA: ";
    cin >> gpa;
    int extracurricular;
    cout << "Do you participate in extracurricular activities? (1=yes, 0=no): ";
    cin >> extracurricular;
    int credits;
    cout << "Enter completed credit hours: ";
    cin >> credits;
    if (gpa >= 3.5 && credits >= 30)
    {
        cout << "Congratulations! You are fully eligible for the scholarship." << endl;
    }
    else if (gpa >= 2.5 && extracurricular == 1)
    {
        cout << "You are conditionally eligible for the scholarship." << endl;
    }
    else
    {
        cout << "Sorry, you are not eligible for the scholarship." << endl;
    }
}

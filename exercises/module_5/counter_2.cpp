#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cout << "Enter starting number:";
    cin >> start;
    cout << "Enter ending number:";
    cin >> end;

    int diff = end - start;
    int counter = 0;
    while (counter <= diff)
    {
        cout << start + counter << " ";
        counter++;
    }
    cout << "\n";
    counter = 0;
    while (counter <= diff)
    {
        cout << end - counter << " ";
        counter++;
    }
}

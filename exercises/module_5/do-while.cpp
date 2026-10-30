#include <iostream>

using namespace std;

int main()
{
    int start, end;
    do
    {
        cout << "Enter starting number:";
        cin >> start;
        cout << "Enter ending number:";
        cin >> end;
    } while (start > end);

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

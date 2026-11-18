#include <iostream>

using namespace std;

void additem()
{
    return inventory + 1;
}
void removeitem()
{
    return inventory - 1;
}
int main()
{
    int inventory = 0;
    cout << "Inventory: " << inventory << endl;
    inventory = addItem(inventory);
    inventory = addItem(inventory);

    cout << "Inventory: " << inventory << endl;
    inventory = removeItem(inventory);
    cout << "Inventory: " << inventory << endl;
}

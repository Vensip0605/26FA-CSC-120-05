#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a number between (1-12): ";
    int num;
    cin >> num;

    ofstream fout;
    string file_name;
    file_name = std::to_string(num) + "_times_table.txt";
    fout.open(file_name); // Open for writing

    if (!fout)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }
    for (int i = 1; i <= 12; i++)
        fout << num << "x" << i << " = " << (num * i) << "\n";
    fout.close(); // Always close when done
}

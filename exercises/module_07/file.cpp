#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("output.txt"); // Open for writing

    if (!fout)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }
    fout << "Hello File!" << endl;
    fout.close(); // Always close when done
}

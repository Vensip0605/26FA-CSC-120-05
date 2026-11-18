#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    ifstream inputFile("output.txt");

    if (!inputFile.is_open())
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    string line;

    while (getline(inputFile, line))
    {
        cout << line << endl;
    }

    inputFile.close();
    return 0;
}

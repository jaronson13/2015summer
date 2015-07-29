#include <string>
#include <iostream>
#include <fstream>

using namespace std;
int numLines(string fileName);

int main()
{

    cout << numLines("testFile.txt");
    return 0;
}
int numLines(string fileName) {
    ifstream myFile;
    myFile.open(fileName.c_str());
    string str;
    int lineCounter = 0;

    if (myFile.is_open())
    {
        while(!myFile.eof())
        {
            getline(myFile, str);
            cout << str;
            lineCounter++;
        }
    }

    return lineCounter;
}

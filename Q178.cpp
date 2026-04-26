#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("test.txt", ios::app);
    file << " Added Text";
    file.close();
}
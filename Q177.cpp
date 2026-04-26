#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("test.txt");
    string data;
    file >> data;
    cout << data;
    file.close();
}
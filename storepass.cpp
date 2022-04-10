#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    string getPass, getName;
    cout << "Type name of program or website followed by a space and a colon: "
    
    getline (cin, getName);
    
    cout << "Type password for site: "
    getline (cin, getPass);

    string txtLine = getName + getPass;

    cout << "The new line in your text file will look like this: " << txtLine

    std::ofstream out(passwords.txt);

    out << txtLine

    out.close();

    return 0;
}
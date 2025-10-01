#include "Scanner.h"
#include <iostream>
#include "Printer.h"

int main()
{
    string user;
    cout << "Enter file name: " << endl;
    cin >> user;

    //Scanner hp;
    //hp.scanFile(user);
    //cout << "Info:\n " << hp.getText();

    Printer::printFile("HelloITStep", user, 3);
}

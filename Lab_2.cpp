#include <string>
#include <iostream>
#include "Class.h"
#include "Funk.h"
#include <fstream>
#include <stdexcept>
using namespace std;

int main()
{
    Funk F;
    F.Cout();
    int n;
    cin >> n;
    switch (n) {
    case 1:
        try
        {
            F.File_Creator();
        }
        catch (...)
        {
            cout << "Something went wrong during creating\n";
        }
        break;
    case 2:
        try 
        {
            F.open_file();
        }
        catch (...)
        {
            cout << "Not Opend\n";
        }
        break;
    case 3:       
            F.File_Reader();     
        break;
    case 4:

        cout << "Home.txt" << endl;
    }
    return 0;
}

#include <string>
#include <iostream>
#include "Class.h"
#include "ClassFunk.h"
#include <fstream>
using namespace std;

int main() {
    Funk F;
    int n;
    cout << "1 - create new file; " << endl;
    cout << "2 - open file; " << endl;
    cout << "3 - Read File; " << endl;
    cout << "4 - Show  name; " << endl;
    cin >> n;
    switch (n) {
    case 1:
        F.File_Creator();
        break;
    case 2:
        F.open_file();
        break;
    case 3:
        F.File_Reader();
        break;
    case 4:
        cout << "Home.txt" << endl;
    }
    return 0;
}

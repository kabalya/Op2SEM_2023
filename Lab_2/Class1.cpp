#include "Class.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Funk 
{
    public:
    void open_file() {
        ofstream open;
        open.open("Home.txt", ifstream::app);
        if (open.is_open())
        {
            int n;

            cout << "1 - write string; " << endl;
            cout << "2 - write integer number; " << endl;
            cout << "3 - print number with swimming point; " << endl;
            cin >> n;
            string text2;
            int num2;
            float float_number2;
            switch (n) {
            case 1:
                cin >> text2;
                open << text2 << endl;
                break;
            case 2:
                cin >> num2;
                open << num2 << endl;
                break;
            case 3:
                cin >> float_number2;
                open << float_number2 << endl;
                break;
            }
        }
        else
        {
            cout << "File is not opend" << endl;
        }

        open.close();
    }
    void File_Creator() {

        string name;
        int n;
        cout << "Write file name: ";
        cin >> name;
        ofstream write;
        write.open(name);
        if (write.is_open())
        {
            
            cout << "1 - write string; " << endl;
            cout << "2 - write integer number; " << endl;
            cout << "3 - print number with swimming point; " << endl;
            cout << "4 - Show name; " << endl;

            cin >> n;
            string text;
            int num;
            float float_number;
            switch (n) {
            case 1:
                cin >> text;
                write << text << endl;
                break;
            case 2:
                cin >> num;
                write << num << endl;
                break;
            case 3:
                cin >> float_number;
                write << float_number << endl;
                break;
            case 4:
                cout << name << endl;
                break;
            }

        }
        else
        {
            cout << "File is not opend" << endl;

        }
        write.close();
    }
    void File_Reader() {
        ifstream read;
        read.open("Home.txt");
        if (read.is_open())
        {
            cout << "File open..." << endl;
            char ch;
            while (read.get(ch)) {
                cout << ch;
            }
        }
        else
        {
            cout << "File is not opend" << endl;

        }
        read.close();
    }
};

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;
class Funk
{
private:

protected:

public:
    void Cout()
    {
        cout << "1 - create new file; " << endl;
        cout << "2 - open file; " << endl;
        cout << "3 - Read File; " << endl;
        cout << "4 - Show  name; " << endl;
      
    }
    void CoutOpen() 
    {
        cout << "1 - write string; " << endl;
        cout << "2 - write integer number; " << endl;
        cout << "3 - print number with swimming point; " << endl;
    }
    void CoutCreator()
    {
        cout << "File is not opend" << endl;

        cout << "1 - write string; " << endl;
        cout << "2 - write integer number; " << endl;
        cout << "3 - print number with swimming point; " << endl;
        cout << "4 - Show name; " << endl;
    }
    
    void open_file() {
        ofstream open;
        open.open("Home.txt", ifstream::app);
       
        if (!open.is_open())
        {
            throw exception ("File is not opend\n");
           
        }
            else
            {
                int n;
                CoutOpen();
                cin >> n;
                string text2;
                int num2;
                float float_number2;
                if (n > 3 || n < 0)
                {
                    throw exception("Your number is wrong,Please,read text one more time");
                   
                }
                switch (n) 
                {
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
        open.close();
        }
    void File_Creator() {

        string name;
        int n;
        cout << "Write file name: ";
        cin >> name;
        ofstream write;
        write.open(name);
        if (!write.is_open())
        {
            CoutCreator();
           

            cin >> n;

            string text;
            int num;
            float float_number;
            if (n>4 || n<0)
            {
              // throw exception();
                cout << "Wrong number";
            }
            else {
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
        }
        else
        {
            CoutCreator();
           
           
           

            cin >> n;

            string text;
            int num;
            float float_number;
            if (n > 4 || n < 0)
            {
            throw exception ( "Wrong number");
            }
            else {
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
        }
        write.close();
    }
    void File_Reader() {
        ifstream read;
        read.open("Home.txt");
        if (!read.is_open())
        {
            cout << "File is not opend" << endl;
            cout << "File open..." << endl;
            char ch;
            while (read.get(ch)) {
                cout << ch;
            }
        }
        else
        {
            cout << "File open..." << endl;
            char ch;
            while (read.get(ch)) {
                cout << ch;
            }

        }
        read.close();
    }
};


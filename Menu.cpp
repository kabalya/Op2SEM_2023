#include "Menu.hpp"

void Menu::Help() {
    setlocale(LC_ALL, "Russian");
    std::cout << "�������:\n";
    std::cout << "help - �������� ��� �������� �������\n";
    std::cout << "save - ��������� � ����.txt\n";
    std::cout << "load - ��������� �������� ���� �� �����.txt\n";
    std::cout << "rotate -����� ��������� rotate ������� ������� ��� ����� �������.up down right left front back (������� ����� ��������� show ��� ������� ���������\n";
    std::cout << "random - ���������� ��������\n";
    std::cout << "show - �������� ��� �������� ����� �� ������ ������\n";
    std::cout << "solve - ������ ����� ������\n";
    std::cout << "stop - ���������(HLT)\n";
}

void Menu::Runtime() {
    std::string command = "", load_name, save_name, face;
    Help();
    while (command != "stop") {
        std::cin >> command;
        if (command == "save")
        {
            Save();
        }
        else if (command == "load")
        {
            Load();
        }
        else if (command == "rotate")
        {
            Rotate();
        }
        else if (command == "random")
        {
            Random();
        }
        else if (command == "show")
        {
            Show();
        }
        else if (command == "solve")
        {
            Solve();
        }
        else if (command == "help")
        {
            Help();
        }
        else if (command != "stop")
        {
            std::cout << "ERROR\n";
            std::cout << "���� ������� �� ��������� �������\n";
        }
    }
}



void Menu::Load() {
    RubCub.ReadCube();
}
void Menu::Solve() {
    RubCub.AssembleRubicCube();
}

void Menu::Rotate() {
    std::string rotate;
    std::cin >> rotate;
    if (rotate == "up")
    {
        RubCub.Up();
    }
    else if (rotate == "down")
    {
        RubCub.Down();
    }
    else if (rotate == "front")
    {
        RubCub.Front();
    }
    else if (rotate == "back")
    {
        RubCub.Back();
    }
    else if (rotate == "left")
    {
        RubCub.Left();
    }
    else if (rotate == "right")
    {
        RubCub.Right();
    } 
}

void Menu::Random()
{
    RubCub.RandomCombination();
}

void Menu::Show() {
    RubCub.Print();
}

void Menu::Save() {
    RubCub.Print(true);
}
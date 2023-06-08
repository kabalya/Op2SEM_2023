#include "Menu.hpp"

void Menu::Help() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Команды:\n";
    std::cout << "help - показать все доступніе команды\n";
    std::cout << "save - сохранить в файл.txt\n";
    std::cout << "load - загрузить значение куба из файла.txt\n";
    std::cout << "rotate -после написания rotate следует указать что нужно вращать.up down right left front back (советую потом прописать show дабі увидеть изменения\n";
    std::cout << "random - перемешать значения\n";
    std::cout << "show - показать как выглядит кубик на данный момент\n";
    std::cout << "solve - Решить кубик Рубика\n";
    std::cout << "stop - Остановка(HLT)\n";
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
            std::cout << "Была введена не коректная команда\n";
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
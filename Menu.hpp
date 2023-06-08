#ifndef MENU_HPP
#define MENU_HPP

#include "Cubik.hpp"

class Menu {
private:
	RubicCube RubCub;

	void Save();
	void Load();
	void Rotate();
	void Random();
	void Show();
	void Solve();

	void Help();
public:
	void Runtime();

};

#endif  //MENU_HPP
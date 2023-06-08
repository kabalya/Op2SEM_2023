#ifndef Cubik_HPP
#define Cubik_HPP

#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <cstdio> 
#include <algorithm>



class RubicCube {
private:
	uint32_t sides[6];

	bool isOut;

	int Color(int, int);

	//methods for rotation (up, down, front, back, left, right
	void Rotation(int);
	void RotationEdges(int[], int[]);
	uint32_t MakeNewEdge(uint32_t, int, int);

	//basic methods
	void Flower();
	void Cross();
	void BangBang();
	void MiddleLayer();
	void LastCross();
	void CorrectLastCross();
	void LastLayer();

	//methods for void Flower();
	bool CheckFlower(int);
	void DownFlower(int);
	void BigRotateFlower(int, int,
		void (RubicCube::*)(bool),
		void (RubicCube::*)(bool),
		bool first_reverse = false, bool second_reverse = false,
		bool reverse = false);
	void SmallRotateFlower(int, void (RubicCube::*)(bool), bool isReverse = false);

	//methods for void Cross();
	void RotateCross(int, int, void (RubicCube::*)(bool), bool reverse = false);

	//methods for void BangBang();
	bool CheckBangBang();
	void DownRotateBangBang(int, void (RubicCube::*)(bool), int amount_down = 0);
	void DownBangBang(int, int, int, int[]);
	void UpRotateBangBang(void (RubicCube::*)(bool));

	//methods for void MiddleLayer();
	bool CheckMiddleLayer();
	void RightRotateMiddleLayer(
		void (RubicCube::*)(bool),
		void (RubicCube::*)(bool),
		int amount_down = 0);
	void LeftRotateMiddleLayer(
		void (RubicCube::*)(bool),
		void (RubicCube::*)(bool),
		int amount_down = 0);
	void SideMiddleLayer(int, int, int[]);
	void RotateMiddleLayer(
		void (RubicCube::*)(bool),
		void (RubicCube::*)(bool));

	//methods for void LastCross();
	void RotateLastCross(int amount_down = 0);

	//methods for void CorrectLastCross();
	void RotateCorrectLastCross(void (RubicCube::*)(bool), int amount_down = 0);

	//methods for void LastLayer();
	void RotateLastLayer();

	//methods for Print();
	int ColorPrint(std::string, int);

public:
	RubicCube();

	void Up(bool reverse = false);
	void Down(bool reverse = false);
	void Front(bool reverse = false);
	void Back(bool reverse = false);
	void Left(bool reverse = false);
	void Right(bool reverse = false);

	void RandomCombination();

	void AssembleRubicCube();

	void Print(bool isFile = false);
	void ReadCube();
};

#endif //Cubik_HPP
#include <Windows.h>
#include <cmath>
#include <ctime>
#include <vector>
#include <string>

#define M_PI 3.14159265358979323846


class Box {
protected:
	int side;
public:

	void setBox(int side) {
		this->side = side;
	}

	double Diagonal() {
		return sqrt(pow(side, 2) + pow(side, 2));
	}

	double Square() {
		return side*side;
	}

	double Perimetr() {
		return 4 * side;
	}
};


class Pyramida : public Box
{
private:
	double apofem,A=5, h;
public:
	void setPyramida(double apofem, int side) {
		this->apofem = A*apofem;
		this->side = side;
		this->h = sqrt(pow(apofem, 2) - pow(side / 2.0, 2));
	}

	double volume() {
		return 1.0 / 3.0 * Pyramida::Square() * h;
	}

	double Spolnoe() {
		return 1.0 / 2.0 * Pyramida::Perimetr() * h+ Pyramida::Square();
	}	
};
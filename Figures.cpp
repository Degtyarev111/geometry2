#include "GeometricalFigure.h"

class Square : public GeometricalFigure {
private: 
	double side;
	const double angle = 90;
public:
	Square(double side) {
		this->side = side;
	}
	void SetSide(double side) {
		this->side = side;
	}
	double GetSide() {
		return side;
	}
	double GetAngle() {
		return angle;
	}
	double getSquare() {
		return side * side;
	}
	double getPerimeter() {
		return side * 4;
	}
};
class Triangle : public GeometricalFigure {
private:
	double side1; double angle1;
	double side2; double angle2;
	double side3; double angle3;
	const double angle = 90;
public:
	Triangle(double side1, double angle1, double side2, double angle2, double side3) {
		this->side1 = side1;
		this->side2 = side2;
		this->side3 = side3;
		this->angle1 = angle1;
		this->angle2 = angle2;
		this->angle3 = 180 - angle1 - angle2;
	}
	void SetSide1(double side1) {
		this->side1 = side1;
	}
	void SetSide2(double side2) {
		this->side2 = side2;
	}
	void SetSide3(double side3) {
		this->side3 = side3;
	}
	double SetAngle1(double angle1) {
		this->angle1 = angle1;
	}
	double SetAngle2(double angle2) {
		this->angle2 = angle2;
	}
	double SetAngle3(double angle3) {
		this->angle3 = angle3;
	}
	double GetAngle1() {
		return angle1;
	}
	double GetAngle2() {
		return angle2;
	}
	double GetAngle3() {
		return angle3;
	}
	double getSquare() {
		return side1 * side2 / 2;
	}
	double getPerimeter() {
		return side1 + side2 + side3;
	}
};
class Circle : public GeometricalFigure {
private: 
	double rad;
public:
	Circle(double rad) {
		this->rad = rad;
	}
	void SetRad(double rad) {
		this->rad = rad;
	}
	double GetRad() {
		return rad;
	}
	double getSquare() {
		return rad * 3.14 * 3.14;
	}
	double getPerimeter() {
		return rad * 3.14;
	}
};
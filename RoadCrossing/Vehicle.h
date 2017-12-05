#pragma once
#include"PreProcess.h"

class Vehicle{
protected:
	vector<Point> m_p;
public:
	virtual void move() = 0;
	virtual void set(Point) = 0;
	bool isImpact(vector <Point>);
	void draw(char);
	Point getFirstPoint();
};
class TrafficLight {
protected:
	int m_trafficLight;// 0 is red and other is green
public:
	TrafficLight();
	void changeLight();
	int& getLight();
	void drawLight(int, int, int);
	void setLight(int);
};
class Truck : public Vehicle {
public:
	Truck();
	// Move truck from left to right in the screen
	void move();
	void set(Point);
};

class Car : public Vehicle {
public:
	Car();
	// Move car from right to left in the screen
	void move();
	void set(Point);
};

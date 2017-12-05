#pragma once
#include"PreProcess.h"

class Animal {
protected:
	vector<Point> m_p;
public:
	virtual void move() = 0;
	virtual void set(Point) = 0;
	//check if the animal is impacted by a people
	bool isImpact(vector<Point>);
	//draw the point
	void draw(char);
	Point& getFirstPoint();
};
class Bird :public Animal {
public:
	Bird();
	void move();
	void set(Point);
};
class Dinausor : public Animal {
public:
	Dinausor();
	void move();
	void set(Point);
};

#pragma once
#include"PreProcess.h"  
const int MAX_LEVEL = 6;

class People {
private:
	vector<Point> m_p;
	bool m_state;//true is alive/ false is dead
	int m_level; 
public:
	//Constructor the people at the beginning of the game
	People();
	/*People will move up, down, left, right according to W, S, A, D*/
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	//Set the people data
	void setPoint(Point);
	void setState(bool);
	void setLevel(int);
	//Check people is impacted with animal and vehicle
	template<class T>
	bool isImpact(vector <T> ob) {
		for (int i = 0; i < ob.size(); i++) {
			if (ob[i].isImpact(m_p)) {
				return true;
			}
		}
		return false;
	}
	//Draw
	void draw(char);
	//Check if the game has finish
	bool isFinish();
	//Check the state of people
	bool isDead();
	//Check the level of people
	bool isLevelUp();
	//Get level of people
	int &getLevel();
	Point &getFirstPoint();
	bool &getState();
};
#include"People.h"

People::People() {
	Point p = { WIDTH / 2, HEIGHT - 2};
	setPoint(p);
	m_state = true;
	m_level = 2;
}
void People::moveUp() {
	if (m_p[0].m_y > 5) {
		for (int i = 0; i < m_p.size(); i++)
			m_p[i].m_y -= 4;
	}
}
void People::moveDown() {
	if (m_p[0].m_y < HEIGHT - 5) {
		for (int i = 0; i < m_p.size(); i++)
			m_p[i].m_y += 4;
	}
}
void People::moveLeft() {
	if (m_p[0].m_x > 5) {
		for (int i = 0; i < m_p.size(); i++)
			m_p[i].m_x -= 4;
	}
}
void People::moveRight() {
	if (m_p[0].m_x < WIDTH - 5) {
		for (int i = 0; i < m_p.size(); i++)
			m_p[i].m_x += 4;
	}
}
void People::setPoint(Point p) {
	m_p.resize(6);
	m_p[0].m_x = p.m_x;
	m_p[0].m_y = p.m_y;
	m_p[1].m_x = p.m_x - 2;
	m_p[1].m_y = p.m_y;
	m_p[2].m_x = p.m_x;
	m_p[2].m_y = p.m_y - 1;
	m_p[3].m_x = p.m_x - 1;
	m_p[3].m_y = p.m_y - 1;
	m_p[4].m_x = p.m_x - 2;
	m_p[4].m_y = p.m_y - 1;
	m_p[5].m_x = p.m_x - 1;
	m_p[5].m_y = p.m_y - 2;
}
void People::setState(bool state) {
	m_state = state;
}
void People::setLevel(int level) {
	m_level = level;
}
void People::draw(char key) {
	for (int i = 0; i < m_p.size(); i++) {
		gotoXY(m_p[i].m_x, m_p[i].m_y);
		cout << key;
	}
}
bool People::isFinish() {
	return (m_level == MAX_LEVEL);
}
bool People::isDead() {
	return !m_state;
}
bool People::isLevelUp() {
	return (m_level < MAX_LEVEL && m_p[0].m_y == 3);
}
int& People::getLevel() {
	return m_level;
}
Point& People::getFirstPoint() {
	return m_p[0];
}
bool& People::getState() {
	return m_state;
}
#include"Vehicle.h"

bool Vehicle::isImpact(vector <Point> p) {
	for (int i = 0; i < p.size(); i++) {
		for (int j = 0; j < m_p.size(); j++) {
			if (p[i].m_x == m_p[j].m_x && p[i].m_y == m_p[j].m_y)
				return true;
		}
	}
	return false;
}
void Vehicle::draw(char key) {
	for (int i = 0; i < m_p.size(); i++) {
		gotoXY(m_p[i].m_x, m_p[i].m_y);
		cout << key;
	}
}
Point Vehicle::getFirstPoint() {
	return m_p[0];
}
Truck::Truck() {
	m_p.resize(5);
}
void Truck::move() {
	for (int i = 0; i < m_p.size(); i++) {
		if (m_p[i].m_x == 1)
			m_p[i].m_x = WIDTH - 2;
		else
			m_p[i].m_x--;
	}

}
void Truck::set(Point p) {
	m_p.resize(5);
	m_p[0].m_x = p.m_x;
	m_p[0].m_y = p.m_y;
	m_p[1].m_x = p.m_x + 1;
	m_p[1].m_y = p.m_y;
	m_p[2].m_x = p.m_x + 2;
	m_p[2].m_y = p.m_y;
	m_p[3].m_x = p.m_x + 1;
	m_p[3].m_y = p.m_y - 1;
	m_p[4].m_x = p.m_x + 2;
	m_p[4].m_y = p.m_y - 1;
}
Car::Car() {
	m_p.resize(6);
}
void Car::move() {
	for (int i = 0; i < m_p.size(); i++) {
		if (m_p[i].m_x == WIDTH - 2)
			m_p[i].m_x = 1;
		else
			m_p[i].m_x++;
	}
}
void Car::set(Point p) {
	m_p.resize(6);
	m_p[0].m_x = p.m_x;
	m_p[0].m_y = p.m_y;
	m_p[1].m_x = p.m_x + 1;
	m_p[1].m_y = p.m_y;
	m_p[2].m_x = p.m_x + 2;
	m_p[2].m_y = p.m_y;
	m_p[3].m_x = p.m_x + 3;
	m_p[3].m_y = p.m_y;
	m_p[4].m_x = p.m_x + 1;
	m_p[4].m_y = p.m_y - 1;
	m_p[5].m_x = p.m_x + 2;
	m_p[5].m_y = p.m_y - 1;
}
void TrafficLight::drawLight(int x, int y, int key) {
	gotoXY(x, y);
	if (m_trafficLight != 0) {
		setColor(2);
		cout << char(key);
	}
	else {
		setColor(4);
		cout << char(key);
	}
}
TrafficLight::TrafficLight() {
	m_trafficLight = 0;
}
void TrafficLight::changeLight() {
	if (m_trafficLight == 0) {
		m_trafficLight = 1;
	}
	else {
		m_trafficLight = 0;
	}
}
int& TrafficLight::getLight() {
	return m_trafficLight;
}
void TrafficLight::setLight(int light) {
	m_trafficLight = light;
}
#pragma once
#include"People.h"
#include"Vehicle.h"
#include"Animal.h"
#include<fstream>
#include<sstream>


class Game {
private:
	vector <Truck> m_truck;
	vector <Car> m_car;
	vector <Dinausor> m_dinausor;
	vector <Bird> m_bird;
	TrafficLight m_trafficLight;
	People m_people;
public:
	Game();
	//Resize the vector
	void resize(int);
	//Draw people, animals and vehicles.
	void drawGame(char);
	//Get the information of people, vehicles and animals.
	People& getPeople();
	vector <Truck>& getTruck();
	vector <Car>& getCar();
	vector <Dinausor>& getDinausor();
	vector <Bird>& getBird();
	TrafficLight& getTrafficLight();
	//Reset the game to the beginning
	void resetGame();
	//exit the game
	void exitGame(HANDLE);
	//start the game
	void startGame();
	//Load the exist data from the *.txt file
	void loadGame(string);
	//Save the game to the *.txt file
	void saveGame(string);
	//Pause the game
	void pauseGame(HANDLE);
	//Resume the game
	void resumeGame(HANDLE);
	//Update the new position of object
	void updatePosPeople(char);
	void updatePosVehicle();
	void updatePosAnimal();
};
#include "cards.h"
#include <iostream>
#include <string>
using namespace std;

void cards::set_values(bool isMinion, string name, int cost){
	this.isMinion = isMinion;
	this.name = name;
	this.cost = cost;
}

void cards::set_minion_values(int attack, int defense, bool protect){
	this.attack = attack;
	this.defense = defense;
	this.protect = protect;
}

bool cards::getProtect(){
	return this.protect;
}

int cards::getCost(){
	return this.cost;
}

int cards::getAttack(){
	return this.attack;
}

int cards::getDefense(){
	return this->attack;
}

bool cards::isMinion(){
	return this.isMinion;
}

string cards::getName(){
	return this.name;
}

cards::cards(){ }

int main(){
	
	cards basic;
	basic.set_values(true, "Libram", 1);
	basic.set_minion_values(1, 3, false);

	cout << basic.getName() << endl;
	cout << basic.getAttack() << " | " << basic.getDefense() << endl;
}
#include "cards.h"
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
cards allCards[2];

void updateStats(int cardOne, int cardTwo){
	allCards[cardOne].set_minion_values(allCards[cardOne].getAttack(), (allCards[cardOne].getDefense() - allCards[cardTwo].getAttack()), allCards[cardOne].getProtect());
	allCards[cardTwo].set_minion_values(allCards[cardTwo].getAttack(), (allCards[cardTwo].getDefense() - allCards[cardOne].getAttack()), allCards[cardTwo].getProtect());
}

int main(int argc, char **argv)
{
	
	
	cards libram;
	libram.set_values(true, "Libram", 1, 0);
	libram.set_minion_values(1, 3, false);
	
	allCards[0] = libram;
	
	cards taunt;
	taunt.set_values(true, "Protector", 2, 1);
	taunt.set_minion_values(2, 3, true);
	allCards[1] = taunt;
	
	for(int i = 0; i < 2; i++){
		cout << "Name: " << allCards[i].getName() << endl;
		cout << "Attack: " << allCards[i].getAttack() << endl;
		cout << "Defense: " << allCards[i].getDefense() << endl;
		cout << "Taunt: " << allCards[i].getProtect() << endl;
		cout << endl;
		
	}
	
	cout << "attack 2/3 with 1/3? (y/n)";
	string answer;
	cin >> answer;
	if(answer == "y"){
		updateStats(libram.getCardNumber(), taunt.getCardNumber());
	}
	
	for(int i = 0; i < 2; i++){
		cout << "Name: " << allCards[i].getName() << endl;
		cout << "Attack: " << allCards[i].getAttack() << endl;
		cout << "Defense: " << allCards[i].getDefense() << endl;
		cout << "Taunt: " << allCards[i].getProtect() << endl;
		cout << endl;
		
	}
	
	
	
	
	
}

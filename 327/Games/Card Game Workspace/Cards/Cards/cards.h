#include <string>
using namespace std;

class cards {
	private:
		bool card_minion; 
		string card_name;
		int card_attack;
		int card_defense;
		bool card_protect;
		int card_cost;
		int card_number;
	public:
		cards(){ }
		void set_values(bool isMinion, string name, int cost, int number){
			card_minion = isMinion;
			card_name = name;
			card_cost = cost;
			card_number = number;
		}
		void set_minion_values(int attack, int defense, bool protect){
			card_attack = attack;
			card_defense = defense;
			card_protect = protect;
		}
		
		bool getProtect() { return card_protect; }
		int getCost()     { return card_cost; }
		int getAttack()   { return card_attack; }
		int getDefense()  { return card_defense;}
		bool getIsMinion(){ return card_minion;}
		string getName()  { return card_name; }
		int getCardNumber(){ return card_number;}
};
#include <string>

class cards {
		bool isMinion; 
		string name;
		int attack;
		int defense;
		bool protect;
		int cost;
	public:
		cards();
		void set_values(bool isMinion, string name, int cost);
		void set_minion_values(int attack, int defense, bool protect);
		bool getProtect();
		int getCost();
		int getAttack();
		int getDefense();
		bool isMinion();
		string getName();
};
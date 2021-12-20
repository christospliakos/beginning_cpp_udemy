#include <iostream>
#include <string>

using std::string, std::cout, std::endl, std::cin;

class Player {
private:
	string name;
	int health;
	int xp;
public:
	void set_name(string name_val) {
		name = name_val;
	}
	// Overloaded constructors
	Player() {
		cout << "No args constructor called" << endl;
	}
	Player(string name) {
		cout << "String arg constructor called" << endl;
	}
	Player(string name, int health, int xp) {
		cout << "Three args constructor called" << endl;
	}
	~Player() {
		cout << "Destructor called for " << name << endl;
	}

}; 

int main() {

	{
		Player slayer;
		slayer.set_name("Slayer");
	}

	{
		Player frank;
		frank.set_name("Frank");
		Player hero("Hero");
		hero.set_name("Hero");
		Player villain("Villain", 100, 12);
		villain.set_name("Villain");
	}

	Player* enemy = new Player;
	enemy->set_name("Enemy");

	Player* level_boss = new Player("Level Boss", 1000, 300);
	level_boss->set_name("Level Boss");

	delete level_boss;
	delete enemy;

	return 0;

}
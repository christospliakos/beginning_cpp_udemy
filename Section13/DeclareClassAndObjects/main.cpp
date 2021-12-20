#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::vector, std::string;

class Player {
	// attributes
	string name {"Player"};
	int health {0};
	int xp {3};

	// methods
	void talk(string);
	bool is_dead();

};


class Account {
	//attributes
	string name {"Account"};
	int balance {0};

	// methods
	bool deposit(double);
	bool withdraw(double);

};


int main() {
	Account frank_account;
	Account jim_account;

	Player frank;
	Player hero;
	
	Player players[]{ frank, hero };

	vector<Player> player_vec{ frank };
	player_vec.emplace_back(hero);

	Player *enemy{ nullptr };
	enemy = new Player();

	delete enemy;

	return 0;
}
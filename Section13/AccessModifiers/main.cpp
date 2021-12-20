#include <iostream>
#include <string>

using namespace std;

class Player {
private:
	string name {"player"};
	int hehalth;
	int xp;
public:
	void talk(string text_to_say) { cout << name << " says " << text_to_say; }
	bool is_dead();
};

int main() {

	Player frank;
	
	frank.talk("Hello there");


	return 0;
}
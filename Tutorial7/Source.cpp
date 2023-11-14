#include <iostream>
#include <string>
using namespace std;

struct locationVector {
	float x;
	float y;
	float z;
};

struct Player
{
	int level;
	float health;
	float damage;
	float stamina;
	locationVector location = { 0.f, 0.f, 0.f };

	void takeDamage(float dmg) {
		health -= dmg;
	}

	int getLevel() {
		if (level > 10) {
			cout << "level is greater than 10 \n";
		}
		return level;
	}

	void displayLocation() {
		cout << "location x = " << location.x << endl;
		cout << "location y = " << location.y << endl;
		cout << "location z = " << location.z << endl;

	}
};




int main() {

	Player player1;
	player1.level = 11;
	player1.health = 100.f;
	player1.damage = 10.f;
	player1.stamina = 20.f;

	cout << "player 1 level = " << player1.getLevel() << endl;

	cout << "current hp = " << player1.health << endl;

	player1.takeDamage(50);
	cout << "current hp = " << player1.health << endl;

	player1.displayLocation();

	Player player2 = { 5, 50.f, 40.f, 35.44f, {35.5f, 6.f, 100.1f} };

	player2.displayLocation();

	system("pause");
}
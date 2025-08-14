#include<iostream>
using namespace std;

class Gun {
public:
    int anmo;
    int damage;
    int scope;
};

class Player {
private:
    class Helmet {
        int hp;
        int level;
    public:
        void setHp(int hp) {
            this->hp = hp;
        }
        void setLevel(int level) {
            this->level = level;
        }
        int getHp() {
            return hp;
        }
        int getLevel() {
            return level;
        }
    };
    
    int health;
    int age;
    Gun gun;
    Helmet helmet;

public:
    // Getters
    int getHealth() {
        return health;
    }

    int getAge() {
        return age;
    }

    Gun getGun() {
        return gun;
    }

    Helmet getHelmet() {
        return helmet;
    }

    // Setters
    void setHealth(int health) {
        this->health = health;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setGun(Gun gun) {
        this->gun = gun;
    }

    void setHelmet(int level) {
        helmet.setLevel(level);
        int health = 0;
        if (level == 1)
            health = 25;
        else if (level == 2)
            health = 50;
        else if (level == 3)
            health = 100;
        else
            cout << "Error, invalid level!" << endl;
        helmet.setHp(health);
    }
};

int main() {
    Player raghav;
    Player manav;
    Player *shashi = new Player;

    Gun ak47;
    ak47.anmo = 100;
    ak47.damage = 50;
    ak47.scope = 2;

    Gun awm;
    awm.anmo = 15;
    awm.damage = 150;
    awm.scope = 1;

    // Raghav setup
    raghav.setAge(21);
    raghav.setHealth(100);
    raghav.setGun(ak47);
    raghav.setHelmet(2);

    Gun gun1 = raghav.getGun();
    cout << "Raghav's Gun:\n";
    cout << gun1.anmo << endl;
    cout << gun1.damage << endl;
    cout << gun1.scope << endl;

    // Manav setup
    manav.setAge(20);
    manav.setHealth(99);
    manav.setGun(awm);
    manav.setHelmet(3);

    Gun gun2 = manav.getGun();
    cout << "\nManav's Gun:\n";
    cout << gun2.anmo << endl;
    cout << gun2.damage << endl;
    cout << gun2.scope << endl;

    // Helmet check
    Player helmetCheckPlayer;
    helmetCheckPlayer.setHelmet(1);
    auto helmet = helmetCheckPlayer.getHelmet();
    cout << "\nHelmet Info:\n";
    cout << "Level: " << helmet.getLevel() << ", HP: " << helmet.getHp() << endl;

    delete shashi; // clean up dynamic allocation
    return 0;
}

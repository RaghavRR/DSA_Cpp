#include<iostream>
using namespace std;

class Player {
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    // Getters
    int getHealth() {
        return health;
    }

    int getAge() {
        return age;
    }

    int getScore() {
        return score;
    }

    bool isAlive() { // changed from int to bool
        return alive;
    }

    // Setters
    void setHealth(int health) {
        this->health = health;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setScore(int score) {
        this->score = score;
    }

    void setIsAlive(bool alive) {
        this->alive = alive;
    }
};


int main() {
    Player raghav; // object creation (static)
    Player manav; //static allocation

    //pointer to object
    Player *shashi = new Player; //it store object address , dynamic allocation

    // Setting values
    raghav.setAge(21);
    raghav.setHealth(100);
    raghav.setScore(70);
    raghav.setIsAlive(true);

    manav.setAge(20);
    manav.setHealth(99);
    manav.setScore(60);
    manav.setIsAlive(true);

    shashi->setScore(40); // (*shashi).setScore(40)
    shashi->setAge(20); // (*shashi).setAge(20)


    cout<<shashi->getScore()<<endl;  //(*shashi).getScore()

    return 0;
}

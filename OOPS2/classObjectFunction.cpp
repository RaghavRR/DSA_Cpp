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

// Function to add scores of 2 players
int add(Player a, Player b) {
    return a.getScore() + b.getScore();
}

// Function to return player with max score
Player getMaxScorePlayer(Player a, Player b) {
    if (a.getScore() > b.getScore()) return a;
    else return b;
}

int main() {
    Player raghav; // object creation (static)
    Player manav;

    // Setting values
    raghav.setAge(21);
    raghav.setHealth(100);
    raghav.setScore(70);
    raghav.setIsAlive(true);

    manav.setAge(20);
    manav.setHealth(99);
    manav.setScore(60);
    manav.setIsAlive(true);

    // Class can be passed/returned in function
    cout << "Total Score: " << add(raghav, manav) << endl;

    Player ajay = getMaxScorePlayer(raghav, manav); // returns object
    cout << "Highest Score: " << ajay.getScore() << endl;
    cout << "Health of Top Scorer: " << ajay.getHealth() << endl;

    return 0;
}

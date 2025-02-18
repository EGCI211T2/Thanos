#ifndef THANOS_H
#define THANOS_H
#include "monster.h"

class Thanos {
private:
    int stones, hp, potions;
public:
    Thanos(int s=0, int h=1000, int p=4) : stones(s), hp(h), potions(p){ 
        cout << "Thanos is here!" << endl; 
        srand(time(0)); 
    }

    ~Thanos() { cout << "Thanos wins!" << endl; }

    void operator++() { 
        stones++; 
        cout << "Thanos collects a stone! Stones: " << stones << endl; 
    }

    void heal() { 
        if (potions > 0){
            hp += 100;
            potions -= 1;
            cout << "Thanos decided to used a potion that he have." << endl;
            cout << "Thanos heals! HP: " << hp << ". Potions left: " << potions << endl;
        }
        else {
            cout << "Thanos try to use a potion." << endl;
            cout << "Out of Potions, can't heal! Hp remain: " << hp << endl;
        }
    }

    void takeDamage(int damage) { 
        hp = max(0, hp - damage); 
        cout << "Thanos takes " << damage << " damage! HP: " << hp << endl;
    }

    void snap_finger(Monster monsters[], int n) {
        if (stones < 6) { 
            stones++;
            cout << "Not enough stones! Thanos gain a stone." << endl; 
        }
        else {
        cout << "*SNAP!* Half of the monsters perish!" << endl;
        stones = 0;
        int half = n / 2;
        for (int i = 0; i < half; i++) {
            int randIndex = rand() % n;
            while (monsters[randIndex].hp == 0) {
                randIndex = rand() % n;
            }
            monsters[randIndex].hp = 0;
            cout << monsters[randIndex].name << " has perished!" << endl;
            }
            cout << "\nStones been used. Starting at " << stones << " again." << endl;
        }
        return; 
    }

    bool isAlive() { return hp > 0; }
};

void Monster::Attack(Thanos &target) { 
    cout << name << " attacks Thanos!" << endl; 
    target.takeDamage(attack_power); 
}

#endif

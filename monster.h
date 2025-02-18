#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Thanos;

class Monster {
public:
    string name;
    int hp, attack_power;
    Monster(string n="Monster", int h=100, int ap=10) : name(n), hp(h), attack_power(ap) {}
    
    void print() { 
        cout << name << " HP: " << hp << endl; 
    }
    
    void Attack(Monster &target) { 
        target.hp = max(0, target.hp - attack_power); 
        cout << name << " attacks " << target.name << "! " << target.name << " HP: " << target.hp << endl;
    }

    void Attack(Thanos &target);
    bool isAlive() { 
        return hp > 0; 
    }
};

#endif
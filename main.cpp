#include "monster.h"
#include "thanos.h"

void monster_attack(Monster monsters[], Thanos &T);

int main() {
    Thanos T;
    cout << "\nOn a planet far far in the universe, there was a war between group of monsters and Thanos.\n" << endl;
    Monster monsters[4] = { {"Goblin", 120, 25}, {"Orc", 150, 50}, {"Troll", 180, 100}, {"Dragon", 300, 200} };

    cout << "\n--- Monsters Appear ---" << endl;
    for (int i = 0; i < 4; i++) monsters[i].print();
    
    cout << "\nThanos: \"You damn mortals dare to challenged me and my infinity glove?\"" << endl;
    cout << "Thanos: \"Then you should feel the wrath of the purple giant!\"\n" << endl; 

    monster_attack(monsters, T);
    if (monsters[3].hp != 0) {
        cout << "The dragon is charging a powerful attack!" << endl;
    }
    else {}

    T.heal();

    ++T; 
    T.snap_finger(monsters, 4);

    monster_attack(monsters, T);
    if (monsters[3].hp != 0) {
        cout << "The dragon powerful attack is almost full! Be careful!" << endl;
    }
    else {}

    T.heal();
    cout << endl;

    ++T; ++T;
    T.snap_finger(monsters, 4);
    
    monster_attack(monsters, T);
    if (monsters[3].hp != 0) {
        cout << "The dragon release a powerful attack!" << endl;
        monsters[3].Attack(T);
    }
    else {}

    T.heal();
    cout << endl;

    ++T; ++T;
    T.snap_finger(monsters, 4);

    monster_attack(monsters, T);
    if (monsters[3].hp != 0) {
        cout << "The dragon is resting after the attack!" << endl;
    }
    else {}

    T.heal();
    cout << endl;
    
    ++T; ++T; ++T;
    T.snap_finger(monsters, 4);

    monster_attack(monsters, T);
    if (monsters[3].hp != 0) {
        cout << "The dragon is charging a powerful attack!" << endl;
    }
    else {}

    T.heal();
    cout << endl;

    ++T; 
    T.snap_finger(monsters, 4);

    monster_attack(monsters, T);
    if (monsters[3].hp != 0) {
        cout << "The dragon is charging a powerful attack!" << endl;
    }
    else {}

    cout << endl;

    cout << "Thanos is angry!" << endl;
    ++T; ++T; ++T;
    T.snap_finger(monsters, 4);
    
    
    cout << "\n--- Final State of Monsters ---" << endl;
    for (int i = 0; i < 4; i++) monsters[i].print();
    return 0;
}

void monster_attack(Monster monsters[], Thanos &T) {
    cout << endl;
    for (int i = 0; i < 3; i++) {
        if (monsters[i].hp != 0) {
            monsters[i].Attack(T);
        }
    }
}

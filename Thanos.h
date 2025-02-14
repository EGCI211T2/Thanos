#include"monster.h"
#define thanos_h
using namespace std;

class Thanos {
private:
    int stones;
    int hp; //extra hp;
public:
    /* constructor and destructor */
Thanos(int =0,int=1000); //stone hp
~Thanos();
    void snap_finger(monster[],int); 
    /* show all hps
    / clear half of monster hp, if stone =6*/
    void operator++(); // increase the stone;
};

Thanos::Thanos(int s, int h){
    stones=s;
    hp=h;
    count<<"Thanos is here"<<endl;
}

Thanos::~Thanos(){
    cout<<"Thanos is killed"<<endl;
}

void Thanos::operator++(){
    //Increase Stones
}

void Thanos::snap_finger(){
    int i;
    srand(time(0));
    int kill=0;

    for(i=0;i<n;i++){
        m[i].print();
    }
    if(stones<6) cout<<"Not enought stones to snap"<<endl;
    else{
        monster *hp 
    }
}

#endif
#include<iostream>
using namespace std;

class monster
{
    char *name[256];
    int hp, skill;
    const int default_dagame = 50;
    bool is_dead;
    monster();  

    attack();
    dagame_earn(int x);
    show_stat();


}
monster::monster() : hp(100), is_dead(false);

int monster::attack() {return damage};

voud show_stat()
{
    cout << "You have select" << name << endl;
    cout << "Here is your stats" << endl;
}

int main()
{
    cout << "Welcome to Pocketmon Battle !!" << endl;
    cout << "You can select a monster below list !" << endl;
    cout << "1. PIKACHU" << endl;
    cout << "2. KABIGON" << endl;
    cout << "3. YADON" << endl;
    cout << "4. Kentucky" << endl;
    cout << "Please Select number !" << endl;


}




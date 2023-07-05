#include<iostream>


class Marine{
    int hp;
    int coord_x, coord_y;
    int damage;
    bool is_dead;

public:
    Marine();
    Marine(int x, inty);
    int attack();
    void be_attaked(int dagmage_earb);
    void mov(int x, int y); // new position
    void show_status();
};
Marine::Marine(){
    hp = 50;
    coord_x = coord_y = 0;
    damage = 5;
    is_dead = false;
}
void Marine::move(int x, int y){
    coord_x = x;
    coord_y = y;
}
int main()
{
    return 0;
}
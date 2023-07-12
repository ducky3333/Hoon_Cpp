#include <iostream>
#include<string.h>

class Marine
{
  int hp;
  int coord_x, coord_y;
  bool is_dead;

  const int default_damage;

  public:
  Marine();
  Marine(int x, int y);
  int attack();
  void be_attacked(int damage_earn);
  void move(int x, int y);

  void show_status();

};

Marine::Marine() : coord_x(0),coord_y(0), hp(50), default_damage(5), is_dead(false){}

Marine::Marine(int x, int y) : coord_x(x),coord_y(y), hp(50), default_damage(5), is_dead(false){}

void Marine::move(int x, int y){

  coord_x = x;
  coord_y = y;
}

int Marine::attack() { return default_damage;}
void Marine::be_attacked(int damage_earn) 
{
  hp -= damage_earn;
  if(hp <= 0 ) is_dead = true;

}

void Marine::show_status(){
  std::cout << " *** Marine ***" << std::endl;
  std::cout << "Location : (" << coord_x << ", " << coord_y << ")" << std::endl;
  std::cout << "hp : " << hp << std::endl;
}

int main()
{
 
  Marine marine1(2, 3);
  Marine marine2(3, 5);

  marine1.show_status();
  marine2.show_status();

  std::cout << std::endl << "Marine 1 has attacked to Marine2 !! " << std::endl;
  marine2.be_attacked(marine1.attack());

  marine1.show_status();
  marine2.show_status();
}

#include<iostream>

typedef struct {
    char name[30];
    int age;
    int health;
    int food;
    int clean; //how much clean
} Animal;

void create_animal(Animal *animal){
    std::cout<< "The name of Animal? ";
    std::cin >> animal -> name;

    std::cout << "How old are Animals? ";
    std::cin >> animal -> age;

    animal -> health=100;
    animal -> food =100;
    animal -> clean = 100;
}

void play(Animal *animal)
{
    animal -> health += 10;
    animal ->food -= 10;
    animal ->clean -=30;
}
void one_day_pass(Animal *animal)
{
    animal -> health -= 10;
    animal ->food -= 30;
    animal ->clean -=20;
}

void show_stat(Animal *animal)
{
    std::cout << animal->name << "'s status" << std::endl;
    std::cout << "health     : "  << animal->health << std::endl;
    std::cout << "food    : " << animal->food << std::endl;
    std::cout << "clean    : " << animal->clean << std::endl;
}

int main(){
    Animal *list[10];
    int animal_num = 0;
    
    for (;;) {
        std::cout << "1. Add animals" << std::endl;
        std::cout << "2. Play" << std::endl;
        std::cout << "3. Checking status " << std::endl;

        int input;
        std::cin >> input;

        switch(input)
        {
            int play_with;
            case 1:
                list[animal_num] = new Animal;
                create_animal(list[animal_num]);

                animal_num++;
                break;
            case 2:
                std::cout << "who want play with? : ";
                std::cin >> play_with;

                if(play_with < animal_num) play(list[play_with]);
                break;
            case 3:
                std::cout << "Who want to see? : ";
                std::cin >> play_with;
                if(play_with < animal_num) 
                show_stat(list[play_with]);
                break;
                
        }
        for(int i = 0; i != animal_num; i++)
        {
            one_day_pass(list[i]);
        }

    }
    for(int i = 0; i != animal_num; i++){
        delete list[i];
    }
}
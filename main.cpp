#include <iostream>
#include <Character.h>

using namespace std;

// a function with no return, takes in argument an instance of the class Character
void introduce_Char(Character const *character) {
    character->about();
}

int main()
{
    // polymorphism function requires pointer/reference and virtual class
    Character *Mokujin(0);
    Mokujin = new Character("Mokujin", "N\a", 100, 35);

    // the class Mishima is another class that inherited the class Character
    Mishima *Kazuya(0);
    Kazuya = new Mishima("Kazuya", "dorya",100, 38, "blue");


    // function about (character->about) has the same name but different method to introduce a character
    introduce_Char(Mokujin);
    introduce_Char(Kazuya);


    return 0;
}



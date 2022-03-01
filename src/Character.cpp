#include "Character.h"
#include <iostream>
#include <string>

Character::Character(std::string _name, std::string _prefix, int _hp, int _dmg): name(_name), prefix(_prefix), hp(_hp),
dmg(_dmg)
{ }

Character::~Character()
{ }

void Character::about() const {
    std::cout << std::endl;
    std::cout << "name : " << name << std::endl;
    std::cout << "prefix : " << prefix << std::endl;
}

void Character::hit(int dmg) {
    hp > dmg ? hp -= dmg : hp = 0;
}

void Character::attack(Character &hitbox) const {
    hitbox.hit(dmg);
}

void Character::status() const {
    std::cout << "hp : " << hp << std::endl;
}


/* Mishima inhertited Character */
Mishima::Mishima(std::string _name, std::string _prefix, int _hp, int _dmg, std::string eColor): Character(_name, _prefix, _hp, dmg),
electric_color(eColor)
{ }

Mishima::~Mishima()
{ }

void Mishima::about() const {
    Character::about();
    std::cout << "electric color : " << electric_color << std::endl;
}

void Mishima::ewgf(Character &hitbox) const {
    hitbox.hit(52);
    std::cout << prefix << " !!!" << std::endl;
}

std::string Mishima::getElectricColor() const {
    return electric_color;
}

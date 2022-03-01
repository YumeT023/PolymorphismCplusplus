#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
    public:
        Character(std::string _name, std::string _prefix, int _hp, int _dmg);
        virtual ~Character();
        virtual void about() const;
        void status() const;
        void attack(Character &hitbox) const;
        void hit(int dmg);

    protected:
        std::string name, prefix;
        int hp, dmg;
};


class Mishima : public Character {
    public:
        Mishima(std::string _name, std::string _prefix, int _hp, int _dmg, std::string eColor);
        virtual ~Mishima();
        void about() const;
        void ewgf(Character &hitbox) const;
        std::string getElectricColor() const;
    private:
        std::string electric_color;
};


#endif // CHARACTER_H

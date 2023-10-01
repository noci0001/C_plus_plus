#include <iostream>

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

class Animal{
protected:
    std::string _type;

public:
    Animal();
    virtual ~Animal();
    virtual void makeSound() const;
    Animal(const Animal &original);
    Animal& operator=(const Animal &original);
    std::string getType() const;
};

#endif

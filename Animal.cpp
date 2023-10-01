#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal()
{
    std::cout << "Animal Class constructor called!" << std::endl;
}

Animal::Animal(const Animal &original)
{
    std::cout << "Animal copy constructor called!" << std::endl;
    this->_type = original._type;
}

Animal &Animal::operator=(const Animal &original)
{
    std::cout << "Animal assignment operator overload called" << std::endl;
    if (this == &original)
        return (*this);
    this->_type = original._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Class destructor called!" << std::endl;
}

std::string Animal::getType() const
{
    // std::cout << "This animal is type " << this->_type << std::endl;
    return ("This Object has type " + this->_type);
}

void Animal::makeSound() const
{
    std::cout << "*Animal sounds" << std::endl;
}
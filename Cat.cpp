#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Meowwwww" << std::endl;
}

Cat::Cat()
{
    std::cout << "Cat Class constructor called!" << std::endl;
    this->_type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Class destructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator overload called." << std::endl;
    if (this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
}

Cat::Cat(const Cat &other) : Animal()
{
    std::cout << "Cat Class copy constructor called!" << std::endl;
    this->_type = other._type;
}
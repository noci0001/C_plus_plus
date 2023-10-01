OUT = Polymorphism
COMPILER = c++
FLAGS = -Wall -Wextra -Werror
SRC = Animal.cpp Cat.cpp Dog.cpp
MAIN = main.cpp

ALL:
	$(COMPILER) $(FLAGS) $(MAIN) $(SRC) -o $(OUT)
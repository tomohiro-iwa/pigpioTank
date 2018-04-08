main: Tank.h Tank.cpp main.cpp
		g++ -Wall -pthread -otank main.cpp Tank.cpp -lpigpio -lrt

#include <iostream>
#include <type_traits>
#include "Hominidae.h"
#include "Ponginae.h"
#include "Pongo.h"
#include "Homininae.h"
#include "Gorillini.h"
#include "Gorilla.h"
#include "Hominini.h"
#include "Pan.h"
#include "Homo.h"

int main(){
    std::cout << (std::is_base_of<Ponginae,Homo>::value ? "Human is a Ponginae" : "Human is not a Ponginae") << std::endl;
    std::cout << (std::is_base_of<Homininae,Homo>::value ? "Human is a Homininae" : "Human is not a Homininae") << std::endl;
    std::cout << (std::is_base_of<Hominidae,Gorilla>::value ? "Gorilla is a Hominidae" : "Gorilla is not a Hominidae") << std::endl;
    std::cout << (std::is_base_of<Hominini,Gorilla>::value ? "Gorilla is a Hominini" : "Gorilla is not a Hominini") << std::endl;
    std::cout << (std::is_base_of<Hominidae,Pongo>::value ? "Pongo is a Hominidae" : "Pongo is not a Hominidae") << std::endl;
    std::cout << (std::is_base_of<Gorillini,Pongo>::value ? "Pongo is a Gorillini" : "Pongo is not a Gorillini") << std::endl;
    std::cout << (std::is_base_of<Homo,Hominidae>::value ? "Hominidae is a Human" : "Hominidae is not a Human") << std::endl;
    std::cout << (std::is_base_of<Gorilla,Hominidae>::value ? "Hominidae is a Gorilla" : "Hominidae is not a Gorilla") << std::endl;
    return 0;
}

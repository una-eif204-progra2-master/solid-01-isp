//
// Created by Maikol Guzman Alan on 3/1/22.
//
#include <iostream>
#include "PhysicalProduct.h"
#include "DigitalProduct.h"

using namespace std;

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    PhysicalProduct physicalProduct;
    physicalProduct.setName("Nintendo");
    physicalProduct.setPrice(500);
    physicalProduct.setWeight(1200);

    DigitalProduct digitalProduct;
    digitalProduct.setName("Game");
    digitalProduct.setPrice(120);
    digitalProduct.setFilePath("c:\\file\\game.app");

    std::cout << "Physical Product: " << physicalProduct.getName() << std::endl;
    std::cout << "Physical Product: " << physicalProduct.ship() << std::endl;
    std::cout << "Physical Product: " << physicalProduct.replace() << "\n" << std::endl;

    std::cout << "Digital Product: " << digitalProduct.getName() << std::endl;
    std::cout << "Digital Product: " << digitalProduct.expire() << "\n" << std::endl;

    return 0;
}

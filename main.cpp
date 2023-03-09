#include <iostream>
using namespace std;

#include "Car.hpp"
#include "Fruit.hpp"


int main() {

  Fruit gruszka;
  gruszka.color = "zielony";
  gruszka.waga = 150;

  Car bmw;
  bmw.name = "BMW";
  
  std::cout << gruszka.printColor();
}
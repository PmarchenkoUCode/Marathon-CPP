#pragma once

#include <chrono>
#include <iostream>
#include <list>
#include <unistd.h>
#include <random>

enum class Gender {
    Male,
    Female
};

struct Rabbit {
    Gender gender;
    bool isVampire;
    int age;
    Rabbit(Gender new_gender, bool new_isVampire, int new_age) {
        gender = new_gender;
        isVampire = new_isVampire;
        age = new_age;
    }
};

void vampireRabbits();
int rabbitsAmount(std::list<Rabbit>& rabbits, int gender);
void rabbitsCreation(std::list<Rabbit>& rabbits, int trigger);
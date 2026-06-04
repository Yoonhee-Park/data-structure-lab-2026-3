#pragma once
#include <string>

class Pet {
protected:
    std::string name;
    int age;
    std::string type;

public:
    Pet(std::string n, int a, std::string t)
        : name(n), age(a), type(t) {}

    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getType() const { return type; }
};

class Puppy : public Pet {
private:
    std::string breed;

public:
    Puppy(std::string n, int a, std::string t, std::string b)
        : Pet(n, a, t), breed(b) {}

    std::string getBreed() const { return breed; }
};
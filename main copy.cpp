//Розробити ієрархію класів згідно отриманого завдання (таблиця 1) та описати їх алгоритмічною мовою С++. При необхідності використати абстрактні класи і віртуальні функції. Написати фрагмент програми з використанням об’єктів створених класових типів.
//
// Публікації: книги (друковані, аудіокниги, електронні), журнали, монографії.

#include <iostream>
using namespace std;

class Animals {
public:
    int numberOfLegs;
    
};

class Mammals : public Animals {
public:
    string speciesName;
    string sex;
    int numberOfTails;
    int getNumberOfTails();

};

int Mammals::getNumberOfTails(){
    return numberOfTails;
}

class Birds : public Mammals {
    int numberOfWings;
};

class Insects : public Mammals {
public:
    
    string nameOfInsect;
    int numberOfLegs;
    
    void getInsectName();
    
    Insects(string nameOfInsect1);
};

void Insects::getInsectName() {
    cout << "Name of this insect is: " << nameOfInsect;
}

Insects::Insects(string nameOfInsect1) {
    nameOfInsect = nameOfInsect1;
}

class Reptiles : public Mammals{
    
public:
    string reptileName;
    
    Reptiles();
    Reptiles(string speciesName1, string sex1, int numberOfLegs1, int numberOfTails1, string reptileName1);
    ~Reptiles();
    
    
};

Reptiles::Reptiles(){}
Reptiles::Reptiles(string speciesName1, string sex1, int numberOfLegs1, int numberOfTails1, string reptileName1) {
    speciesName = speciesName1;
    sex = sex1;
    numberOfLegs = numberOfLegs1;
    numberOfTails = numberOfTails1;
    reptileName = reptileName1;
}
Reptiles::~Reptiles(){}

class Fishes : public Mammals{
    
public:
    string fishName;
    
};

int main() {
    
    Reptiles snake("Python", "male", 0, 1, "Paul");
    
    cout << "Snake's species is: " << snake.speciesName << ", it's a " << snake.sex << " reptile with " << snake.numberOfLegs << " legs. This reptile has " << snake.getNumberOfTails() << " tail and is named " << snake.reptileName << "." << endl;
    
    Insects butterfly("Butter.\n");
    
    butterfly.getInsectName();
    
    
    return 0;
}

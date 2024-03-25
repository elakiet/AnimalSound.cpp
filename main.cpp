#include<iostream>
using namespace std;

class Animal{
    public:
        void animalSound(){
            cout<<"Animal makes sound"<<endl;
        }
};
class Dog: public Animal{
    public:
        void animalSound(){
            cout<<"Dog makes sound: Bow Bow"<<endl;
        }
};
class Cat: public Animal{
    public:
        void animalSound(){
            cout<<"Cat makes sound : Meow Meow"<<endl;
        }
};

int main(){
    Animal animal;
    Dog dog;
    Cat cat;

    animal.animalSound();
    dog.animalSound();
    cat.animalSound();
    return 0;
}
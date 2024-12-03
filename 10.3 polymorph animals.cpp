/*Make a class “Animal” with the abstract method speak()
Make classes “dog” and “cat” that inherit from animal.
Override the speak method
Make the objects and call speak from main*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() =0;
};
class Dog : public Animal {
public:
    void speak() override{
        cout << "woof" << endl;
    }
};
class Cat : public Animal {
public:
    void speak() override{
        cout << "meow" << endl;
    }
};

int main() {
    while (1) {
        int choice;
        cout << "1. Dog" << endl << "2. Cat" << endl << "3. Exit" << endl;
        cin >> choice;
        if (choice == 1) {
            Dog dog;
            dog.speak();
        }
        else if (choice == 2) {
            Cat cat;
            cat.speak();
        }
        else if (choice == 3) {
            break;
        }
        else {
            cout << "Invalid choice, try again!" << endl;
        }
    }
    return 0;
}

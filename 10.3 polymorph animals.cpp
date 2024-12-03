/*Make a class “Animal” with the abstract method speak()
Make classes “dog” and “cat” that inherit from animal.
Override the speak method
Make the objects and call speak from main*/

/*#include <iostream>
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
}*/

/*Add the pure abstract method Eat() to animal class*/

/*#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() =0;
    void eat() {
        cout<<"I am EAT!"<<endl;
    }
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
        int choice0;
        cout<<"1. SPEAK"<<endl << "2. EAT" << endl << "3. EXIST" << endl;
        cin>>choice0;
        if (choice0 == 1) {
            int choice;
            cout << "1. Dog" << endl << "2. Cat" << endl;
            cin >> choice;
            if (choice == 1) {
                Dog dog;
                dog.speak();
            }
            else if (choice == 2) {
                Cat cat;
                cat.speak();
            }
        }
        else if (choice0 == 2) {
            int choice;
            cout << "1. Dog" << endl << "2. Cat" << endl << endl;
            cin >> choice;
            if (choice == 1) {
                Dog dog;
                dog.eat();
            }
            else if (choice == 2) {
                Cat cat;
                cat.eat();
            }
        }
        else if (choice0 == 3) {
            break;
        }
        else {
            cout << "Invalid choice, try again!" << endl;
        }
    }
    return 0;
}*/

/*Add virtual destructor to Animal class*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() =0;
    void eat() {
        cout<<"I am EAT!"<<endl;
    }
    virtual void destructor() {
        delete this;
    };
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
        int choice0;
        cout<<"1. SPEAK"<<endl << "2. EAT" << endl << "3. EXIST" << endl;
        cin>>choice0;
        if (choice0 == 1) {
            int choice;
            cout << "1. Dog" << endl << "2. Cat" << endl;
            cin >> choice;
            if (choice == 1) {
                Dog dog;
                dog.speak();
            }
            else if (choice == 2) {
                Cat cat;
                cat.speak();
            }
        }
        else if (choice0 == 2) {
            int choice;
            cout << "1. Dog" << endl << "2. Cat" << endl << endl;
            cin >> choice;
            if (choice == 1) {
                Dog dog;
                dog.eat();
            }
            else if (choice == 2) {
                Cat cat;
                cat.eat();
            }
        }
        else if (choice0 == 3) {
            break;
        }
        else {
            cout << "Invalid choice, try again!" << endl;
        }
    }
    return 0;
}

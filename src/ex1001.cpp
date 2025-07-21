# include <iomanip>
# include <iostream>
#include <vector>
using namespace std;

class animal {
    public:
        void speak() {
            cout << "some sound\n";
        }
        ~animal() {
            cout << "animal cleaning\n";
        }
};
class dog : public animal {
    public:
        void speak() {
            cout << "woof\n";
        }
        ~dog() {
            cout << "animal cleaning\n";
        }
};
class cat : public animal {
    public:
        void speak() {
            cout << "meow\n";
        }
        ~cat() {
            cout << "animal cleaning\n";
        }
};

int main(){

    vector<animal*> pets;
    pets.push_back(new dog());
    pets.push_back(new cat());
    
    for(animal* pet : pets){
        pet->speak();
    }
    for(animal* pet : pets){
        delete pet;
    }
  return 0;
}
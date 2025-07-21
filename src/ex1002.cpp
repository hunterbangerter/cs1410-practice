# include <iomanip>
# include <iostream>
#include <vector>
using namespace std;

class animal {
    public:
        virtual void speak() {
            cout << "some sound\n";
        }
        virtual ~animal() {
            cout << "animal cleaning\n";
        }
};
class dog : public animal {
    public:
        void speak() {
            cout << "woof\n";
        }
        ~dog() {
            cout << "dog cleaning\n";
        }
};
class cat : public animal {
    public:
        void speak() {
            cout << "meow\n";
        }
        ~cat() {
            cout << "cat cleaning\n";
        }
};

int main(){

    vector<animal*> pets;
    pets.push_back(new dog());
    pets.push_back(new cat());
    
    for(animal* pet : pets){
        pet->speak();
    }

    animal& d = *pets[0];
    animal& c = *pets[1];
    d.speak();
    c.speak();

    animal ad = *pets[0];
    animal ac = *pets[1];
    ad.speak();
    ac.speak();

    for(animal* pet : pets){
        delete pet;
    }
  return 0;
}
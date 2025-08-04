#include <stdexcept>
#include <iostream>
using namespace std;

template <typename t>

class calculator {
    private:
        t a, b;
    public:
        calculator(t a, t b): a(a), b(b){}

        t add() const { return a + b;}
        t subtract() const { return a - b;}
        t multiply() const { return a * b;}
        t devide() const { 
            if(b == 0){
            throw runtime_error("Division by Zero");
            }return a / b;
        }
        
        
};

int main(){
    try {
        calculator<double> c(10.0, 2.0);
        cout << c.add() << endl
         << c.subtract()<< endl
         << c.multiply()<< endl
         << c.devide() << endl;

        
        calculator<int> c1(4, 0);
        cout << c1.add()<< endl
         << c1.subtract()<< endl
         << c1.multiply()<< endl
         << c1.devide() << endl;

    } catch (const runtime_error& e){
        cerr << "an exception happened: " << e.what() << endl;
    }

  return 0;
}
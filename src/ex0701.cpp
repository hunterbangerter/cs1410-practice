# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
using namespace std;

class color {
    private:
        double r, g, b;
    public:
        color(): r(0.0), g(0.0), b(0.0){}
        color(double r, double g, double b): r(r), g(g), b(b) {}
        
        string toRGB(){
            stringstream sout;
            sout << "rgb(" << static_cast<int> (r * 225) << "," << static_cast<int> (g * 225) << "," << static_cast<int> (b * 225) << ")";
            return sout.str();
        }
        string toHEX(){  // #01AC03
            stringstream sout;
            sout << "#" <<  setfill('0') << hex << setw(2) << static_cast<int> (r * 225) << setw(2) << static_cast<int> (g * 225) << setw(2) << static_cast<int> (b * 225) << ")";
            return sout.str();
        }
    };
    

int main(){
    color c; //black
    color c1(1.0, 0.25, .5);

    cout << c.toRGB() << " ---" << c.toHEX() << endl;
    cout << c1.toRGB() << " ---" << c1.toHEX() << endl;

    
  return 0;
}
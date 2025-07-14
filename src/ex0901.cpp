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
        
        string toRGB() const{
            stringstream sout;
            sout << "rgb(" << static_cast<int> (r * 225) << "," << static_cast<int> (g * 225) << "," << static_cast<int> (b * 225) << ")";
            return sout.str();
        }
        string toHEX() const{  // #01AC03
            stringstream sout;
            sout << "#" <<  setfill('0') << hex << setw(2) << static_cast<int> (r * 225) << setw(2) << static_cast<int> (g * 225) << setw(2) << static_cast<int> (b * 225) << ")";
            return sout.str();
        }

        friend ostream& operator<<(ostream& out, const color& c){
            out << c.toHEX();
            return out;
        }
        friend istream& operator>>(istream& in, color& c){
            in >> c.r >> c.g >> c.b;
            return in;
        }

        double operator[] (int index) const{
            switch(index){
                case 0: return r;
                case 1: return g;
                case 2: return b;
                default: return -1.0;

            }
        }
        
        double& operator[] (int index) {
            switch(index){
                case 0: return r;
                case 1: return g;
                case 2: return b;
                default: throw -1.0;
            }
        }
         bool operator==(const color& c){
        return r == c.r && g == c.g && b == c.b;
    }
    };
    
   

int main(){
    color c; //black
    color c1(1.0, 0.25, .5);

    cout << c << endl;
    cout << c1 << endl;


    cout << c.toRGB() << " ---" << c.toHEX() << endl;
    cout << c1.toRGB() << " ---" << c1.toHEX() << endl;

    color c2;
    cout << "enter a color (three balues between 0.0 and 1.0):";
    cin >> c2;

    cout << "\nc1 red:" << c1[0] << endl;
    cout << "\nc red:" << c1[1] << endl;
    cout << "\nc2 red:" << c1[2] << endl;

    c2[1] = .6;
    if(c1 == c2){ // ++ c1, c2) becomes c1.==(c2)
        cout << "same" << endl;
    }else {
        cout << "different" << endl;
    }

    
  return 0;
}
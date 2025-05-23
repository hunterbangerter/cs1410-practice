# include <iomanip>
# include <string>
# include <cmath>
# include <iostream> 

using namespace std;
string findquardant(double deg);
string findquardant(double deg){
    double rad = 3.14 * deg / 180;
    if(sin(rad) >= 0 && cos(rad) >= 0){
    return "Quadrant I";
    } else if (sin(rad) >= 0 && cos(rad) < 0){
        return "quadrant II";
    } else if (sin(rad) < 0 && cos(rad) < 0){
        return "quadrant III";
    }else {
        return "quadrant IV";
    }
}
int main(){
    cout << findquardant(23) << endl;
    cout << findquardant(123) << endl;
    cout << findquardant(223) << endl;
    cout << findquardant(323) << endl;
  return 0;
}
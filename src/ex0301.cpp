# include <iostream>
# include <iomanip>
# include <string>

using namespace std;

string repchar(char, int);
string repchar(char c, int n){
  string r;
  for (int i = 0; i < n; i++){
    r=r+c;
  }
  return r;
}
long HMS_2_secs(int h, int m, int s);
long HMS_2_secs(int h, int m, int s){
  long secs = h * 60 * 60 + m * 60 + s;
    return secs;
}
void swapV(double& x, double& y);
void swapV(double& x, double& y){
  double t = x;
  x = y;
  y = t;

}

int main(){
    cout << repchar('X', 8) << endl;
    cout << HMS_2_secs (4,56,17) << " Seconds" << endl;

    double x = 10.0, y = 30;
    cout << x << "," << y << endl;
    swapV(x,y);
    cout << x << "," << y << endl;

  return 0;
}
# include <iomanip>
#include <fstream>
#include <random>
# include <iostream>
using namespace std;

int main(){
    const int N = 200;
    const int minv = 1;
    const int maxv = 10;
    const double mean = 5.5;
    const double sd = 2.0;

    default_random_engine en;
    normal_distribution<double> dist(mean, sd);

    ofstream out("data.txt");
    for (int i = 0; i < N; i++){
        int x = round(dist(en));
        x = max(minv, min(maxv, x));
        out << x << " ";
    }
    out.close();

    cout << "generated " << N << "numbers in data.txt\n";
  return 0;
}
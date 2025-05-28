# include <iomanip>
# include <string>
# include <cmath>
# include <iostream>

using namespace std;

enum class BillKind {
    one, five, ten, twenty

};
struct cashinonebillkind{
 BillKind kind;
 int count;

};
struct cash {
    cashinonebillkind ones;
    cashinonebillkind fives;
    cashinonebillkind tens;
    cashinonebillkind twenties;

};
int totalcash(cash& c){
    return(c.ones.count * 1 +
    c.fives.count * 5 +
    c.tens.count * 10 +
    c.twenties.count * 20);
}
int main(){

    cash inwallet {
        {BillKind::one, 2},
        {BillKind::five, 3},
        {BillKind::ten, 1},
        {BillKind::twenty, 3},
    };

    cout << "Total cash in wallet: " << totalcash(inwallet) << endl;

  return 0;
}
# include <iomanip>
# include <string>
# include <iostream>
using namespace std;

struct Date {
    int year;
    string month;
    int day;
};
struct point {
    int x, y;

};

void printdate(Date& d){
    cout << "DOB:  " << d.month << " " << d.day << "," << d.year << endl;
}
void printpoint(point& p){
    cout << "(" << p.x << "," << p.y << ")" << endl;
}


int main(){
    Date dob {2025, "march", 21};
    Date wedingDay = {2000, "may", 31};

    char trash;
    point p, q, h;

    cout << "enter point p: ";
    cin >> trash >> p.x >> trash >> p.y >> trash;

    cout << "enter point q: ";
    cin >> trash >> q.x >> trash >> q.y >> trash;

    printdate(dob);
    printdate(wedingDay);
    printpoint(p);
    printpoint(q);

    h.x = (p.x + q.x) / 2;
    h.x = (p.y + q.y) / 2;
    printpoint(h);

  return 0;
}
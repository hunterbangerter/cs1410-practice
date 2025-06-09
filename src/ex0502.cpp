# include <iomanip>
# include <string>
# include <cmath>
# include <iostream>

using namespace std;

int main(){
    int age;
    string fullname;

    cout << "enter age: ";
    cin >> age;

    cin.ignore();

    cout << "enter full name: ";
    getline(cin, fullname);

    cout << "Hello! you are " << age << " years old, and your full name is " << fullname << endl;

  return 0;
}
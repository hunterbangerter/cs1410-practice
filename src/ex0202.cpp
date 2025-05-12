# include <iostream>
# include <string>

using namespace std;

int main(){
    cout << "Enter day: (using abreviation ex. 'sun')";
    string day;
    cin >> day;

    if(day == "sun" || day == "sat"){
        cout << "this is a weekend" << endl;
    }else{
            cout << "this is a weekday" << endl;
        }

  return 0;
}
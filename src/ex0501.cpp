# include <iomanip>
# include <string>
# include <cmath>
# include <iostream>

using namespace std;

struct month {
    string name;
    int days;
};

int main(){
    int year;
    cout << "enter current year: ";
    cin >> year;

    month months[]{
   {"january", 31},
  {"february", year % 4 == 0 ? 29:28},
     {"march", 31},
     {"april", 30},
       {"may", 31},
      {"june", 30},
      {"july", 31},
    {"august", 31},
 {"september", 30},
   {"october", 31},
  {"november", 30},
  {"December", 31},
    };




    // string months [12]{"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "December"};
    // int days []{31, year % 4 == 0 ? 29:28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << setw(10) << "month" << setw(12) << "# of days" << endl;
    for (int i=0; i<12; i++){
        cout << setw(10) << months[i].name << setw(12) << months[i].days << endl;
    }

  return 0;
}
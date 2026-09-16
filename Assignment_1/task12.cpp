#include <iostream>
using namespace std;
int main(){
    int day{}, mounth{}, year{};
    cin >> day >> mounth >> year; 
    int daysInMounth{};
    if (mounth < 1 or mounth > 12 or day < 1){
        cout << "invalid" << endl;
        return 0;
    }
    if (mounth == 2){
        if ((year % 400 == 0) or (year % 4 == 0 and year % 100 != 0)){
            daysInMounth = 29;
        } else {
            daysInMounth = 28;
        }
    } else if (mounth == 4 or mounth == 6 or mounth == 9 or mounth == 11){
        daysInMounth = 30;
    } else {
        daysInMounth = 31;
    }
    if (day > daysInMounth){
        cout << "invalid" << endl;
    } else if (day < daysInMounth){
        ++day;
        cout << day << " " << mounth << " " << year << endl;
    } else {
        day = 1;
        if (mounth == 12){
            mounth = 1;
            ++year;
        } else {
            ++mounth;
        }
        cout << day << " " << mounth << " " << year << endl;
    }
    return 0;
}
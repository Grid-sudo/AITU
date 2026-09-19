#include <iostream>
using namespace std;

int main() {
    int d, m, y;
    cin >> d >> m >> y;
    bool isLeap = (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
    int days[] = {0, 31, 28 + isLeap, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m < 1 || m > 12 || d < 1 || d > days[m]) {
        cout << "invalid\n";
        return 0;
    }
    if (++d > days[m]) {
        d = 1; 
        if (++m > 12) { 
            m = 1;     
            y++;   
        }
    }
    cout << d << " " << m << " " << y << endl;
    return 0;
}
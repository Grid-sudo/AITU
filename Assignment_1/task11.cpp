#include <iostream>
using namespace std;
int main(){
    double a{}, b {}, c{};
    cin >> a >> b >> c;
    double dis{(b * b) - 4 * a * c};
    if (a == 0) {
        cout << "No solution" << endl;
    }else if (dis < 0) {
        cout << "No real roots" << endl;
    }else if (dis == 0){
        double x{-b / (2 * a)};
        cout << x << endl;
    }else if(dis > 0){
        double x1{(-b + sqrt(dis)) / (2 * a)};
        double x2{(-b - sqrt(dis)) / (2 * a)};
        cout << x2  << " " << x1 << endl;
    }else{
        cout << "no solution" << endl;
    }
}
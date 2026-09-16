## task.cpp
```cpp
#include <iostream>

using namespace std;
int main(){
    int x {10};
    cout << "x = " << x << endl;
    return 0;
}```

## task10.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int a {}, b {};
    char operation {};
    cin >> a >> b >> operation;
    switch(operation){
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if(b != 0){
                cout << a / b << endl;
            }else{
                cout << "Error: Division by zero" << endl;
            }
            break;
        default:
            cout << "Invalid operation" << endl;
    }

}```

## task11.cpp
```cpp
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
}```

## task12.cpp
```cpp
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
}```

## task13.cpp
```cpp
#include <iostream>
using namespace std;
int main() {
    long a, b;
    char op;
    bool is_error = false;
    std::cin >> a >> b >> op;
    long long result = 0;
    switch (op) {
        case '+':
            result = (a) + b; 
            break;
        
        case '-':
            result = (a) - b;
            break;

        case '*':
            result = (a) * b;
            break;
        
        case '/':
            if (b == 0) {
                is_error = true;
                break;
            }
            result = (a) / b;
            break;  
        default:
            is_error = true;  
        }

    if (is_error) {
        std::cout << "Error\n";
        return 1;
    }

    if ((result < numeric_limits<int>::min()) || (result > numeric_limits<int>::max())) {
        std::cout << "Overflow\n";
        return 1;
    }
    std::cout << result << "\n"; 
    return 0;
}```

## task14.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int hour{}, minutes{}, seconds{};
    char colon1, colon2;
    cin >> hour >> colon1 >> minutes >> colon2 >> seconds;
    
    int max_hour{23},max_minutes{59}, max_seconds{59};
    if(hour > max_hour or  minutes > max_minutes or seconds > max_seconds){
        cout << "invalid time" << endl;
    }else if(hour == 23 and minutes == 59 and seconds == 59){
        hour = 0;
        minutes = 0;
        seconds = 0;
        cout << hour << ":" << minutes << ":" << seconds << endl;
    }else{
        if(seconds >= 0 and seconds < 59){
            ++seconds;
            cout << hour << ":" << minutes << ":" << seconds << endl;
        }else if(seconds == 59){
                if(minutes >= 0 and minutes < 59){
                    ++minutes;
                    seconds = 0;
                    cout << hour << ":" << minutes << ":" << seconds << endl;
                }else if(minutes == 59){
                    minutes = 0;
                    seconds = 0;
                    ++hour;
                    cout << hour << ":" << minutes << ":" << seconds << endl;
                }
            }else{
                cout << "invalid time" << endl;
            }
        }
    }
```

## task15.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int reverse_x = 0;
    while(x > reverse_x){
        reverse_x = (reverse_x * 10) + (x % 10);
        x /= 10;
    }
    cout << reverse_x <<endl;
    bool answer = (x == reverse_x) or (x == reverse_x / 10);
    if(answer){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}```

## task2.cpp
```cpp
#include <iostream>

using namespace std;
int main(){
    int a, b;
    cout << "Введите первое число:  ";
    cin >> a;
    cout << "Введите второе число:  ";
    cin >> b;
    cout << "+: " << a + b << endl;
    return 0;
}```

## task3.cpp
```cpp
#include <iostream>

using namespace std;
int main(){
    int a, b;
    cout << "Введите первое число:  ";
    cin >> a;
    cout << "Введите второе число:  ";
    cin >> b;
    cout << "/ :" << a / b << endl;
    return 0;
}```

## task4.cpp
```cpp
#include <iostream>

using namespace std;
int main(){
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(char) << endl;
    return 0;
}```

## task5.cpp
```cpp
#include <iostream>

using namespace std;
int main(){
    string name;
    int age;
    cout << "Введите ваше имя: ";
    cin >> name;
    cout << "Введите ваш возраст: ";
    cin >> age;
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    return 0;
}```

## task6.cpp
```cpp
#include <iostream>

using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a << endl;
    } else {
        cout << b << endl;
    }
    return 0;
}```

## task7.cpp
```cpp
#include <iostream>

using namespace std;
int main(){
    int a;
    cin >> a;
    if (a >= 90){
        cout << "A" << endl;
    } else if(a >= 75){
        cout << "B" << endl;
    }else if(a >= 50){
        cout << "C" << endl;
    }else{
        cout << "F" << endl;
    }
    return 0;
}```

## task8.cpp
```cpp
#include <iostream>
using namespace std;
int mein(){
    int day_nunber {};
    cin >> day_nunber;
    switch(day_nunber){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;            
            break;
        case 6:
            cout << "Saturday" << endl;            
            break;
        case 7:
            cout << "Sunday" << endl;            
            break;
        default:
            cout << "Invalid" << endl;
}```

## task9.cpp
```cpp
#include <iostream>
using namespace std;
int main() {
    int n {};
    cin >> n;
    cout << ((n % 2 == 0)? "Even" : "Odd") << endl;
}```


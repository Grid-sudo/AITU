## task_1.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 10; ++i){
        cout << i << endl;
    }
}
```

## task_10.cpp
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, sum;
    cin >> a;
    for(int i = 0; i < a; ++i){
        if(a % i == 0){
            sum += 1;
        }
    }
    cout << (sum > 2 ? "Не простое число" : "простое число") << endl;
}
```

## task_11.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    const int max = 5;
    int numbers[max];
    int i {0};
    int sum{0};
    while(i < max){
        cin >> numbers[i];
        i++;
    }
    for(i = 0; i < max; i++){
        sum += numbers[i];
    }
    cout << sum << endl;
}
```

## task_12.cpp
```cpp
#include <iostream>
#include <vector> 
using namespace std;

int main(){
    int max = 0;
    cout << "Введите размер массива" << endl;
    cin >> max;
    vector<int> numbers(max);
    
    int i = 0;
    while(i < max){
        cin >> numbers[i];
        i++;
    }
    int max_size = numbers[0];
    for(i = 0; i < max; i++){
        if(numbers[i] > max_size){
            max_size = numbers[i];

        }
    }
    cout << "Максимально число"<< max_size << endl;
    return 0;
}```

## task_13.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int rows{1};
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        for(int j = rows + 1 - i; j <= rows; j++){
            cout << '*';
        }
        cout << endl;
    }
}```

## task_14.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            cout << i << '*' << j << '=' << i * j << endl;
        }
        
        cout << endl;
    }
}```

## task_15.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int rows{1};
    cin >> rows;
    int number{0};
    for(int i = 1; i <= rows; i++){
        for(int j = rows + 1 - i; j <= rows; j++){
            number +=1;
            cout << number << " ";
        }
        number = 0;
        cout << endl;
    }
}```

## task_16.cpp
```cpp
#include <iostream>
using namespace std;

int main() {
    int A[3][3];
    int B[3][3];
    int C[3][3];
    cout << "Введите элементы первой матрицы (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Введите элементы второй матрицы (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Результат сложения матриц:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}```

## task_17.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    string text;
    int sum {0};
    cin >> text;
    for (const char n : text)
    {
        if(n == 'a' or n == 'e' or n == 'i' or n == 'o' or n == 'u'){
            sum +=1;
        }
    }
    cout << sum << endl;
}```

## task_18.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int reverse_a{0};
    while(a > 0){
        reverse_a = (reverse_a * 10) + (a % 10);
        a /= 10;
    }
    cout << reverse_a << endl;
}```

## task_19.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int max{0};
    if(a > b){
        max = a;
    }else{
        max = b;
    }
    for(int i = max; ;i++){
        if(i % a == 0 and i % b == 0){
            cout << i << endl;
            break;
        }
    }
}```

## task_2.cpp
```cpp

#include <iostream>
using namespace std;
int main(){
    int x = 2;
    while(x <= 20){
        cout << x << endl;
        x += 2;
    }
}```

## task_20.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int a;
    int sum = 0;
    cin >> a;
    for(int i = 1; i <= a; i++){
        sum += i * i;
        cout << sum << endl;
    }
}```

## task_21.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int x {123};
    cin >> x;
    int reverse_x = 0;
    int sum = 0;
    while(x > 0){
        reverse_x = (x % 10);
        sum += reverse_x * reverse_x * reverse_x;;
        x /= 10;
    }
    cout << sum << endl;
}```

## task_3.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    for(int i = 0 - 1; i <= a; ++i){
        b += i;
        
    }
    cout << b << endl;
}```

## task_4.cpp
```cpp

#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 10; ++i){
        cout << i * 5 << endl;
    }
}```

## task_5.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int x = 50 + 1;
    while(x >= 1){
        x -= 1;
        cout << x << endl;
    }
}```

## task_6.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int x;
    int fact{1};
    cin >> x;
    for(int i = 1; i <= x; ++i){
        fact *= i;
    }
    cout << fact << endl;
}```

## task_7.cpp
```cpp
#include <iostream>
using namespace std;
int main(){
    int x {123};
    int reverse_x = 0;
    int sum = 0;
    while(x > 0){
        reverse_x = (x % 10);
        sum += reverse_x;
        x /= 10;
    }
    cout << sum << endl;
}```

## task_8.cpp
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
    bool answer = (x == reverse_x) or (x == reverse_x / 10);
    if(answer){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}```

## task_9.cpp
```cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    long long x_1 = 1; 
    long long x_2 = 1;
    for (int i = 1; i <= a; ++i) {
        cout << x_1 << " "; 
        long long next = x_1 + x_2; 
        x_1 = x_2;               
        x_2 = next;              
    }
    cout << endl;
}
```


## task_01.cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max = 0;
    cin >> max;
    vector<int> values(max);
    for (int i = 1; i <= max; i++){
        cin >> values[i];
    }

    float sum = 0;
    for(int j = 1; j <= max; j++){
        sum += values[j];
    }
    cout << sum / max << endl;
}```

## task_02.cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max;
    cin >> max;
    vector<int> values(max);
    for (int i = 0; i < max; i++){
        cin >> values[i];
    }
    int max_values_1 = values[0];
    int max_values_2 = values[0];
    for(int j = 0; j < max; j++){
        if(values[j] > max_values_1){
            max_values_2 = max_values_1;
            max_values_1 = values[j];
        }else if (values[j] < max_values_1 && (values[j] > max_values_2 || max_values_1 == max_values_2)) {
            max_values_2 = values[j];
        }
    }
    cout <<  max_values_1 << " " << max_values_2 << endl;
}```

## task_03.cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max;
    cin >> max;
    vector<int> values(max);
    for (int i = 0; i < max; i++){
        cin >> values[i];
    }
    int negative = 0;
    int zero = 0;
    int positive = 0;
    for(int j : values){
        if(j == 0){
            zero += 1;
        }else if(j < 0){
            negative += 1;
        }else{
            positive += 1;
        }
    }
    cout << "positive " << positive << " " << "negative " << negative << " " << "zero " << zero << endl;
}```

## task_04.cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max;
    cin >> max;
    vector<int> values(max);
    for (int i = 0; i < max; i++){
        cin >> values[i];
    }
    for(int pop : values){
        if(pop <= 0){
            pop = 0;
        }
        cout << pop << endl;
    }
}```

## task_05.cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int max;
    cin >> max;
    vector<int> mas(max);
    vector<int> mas_2(max);
    for (int j = 0; j < max; j++) {
        cin >> mas[j];
        mas_2[j] = mas[j];
    }
    for (int i = 0; i < max / 2; i++) {
        int num = mas[i];
        mas[i] = mas[max - 1 - i];
        mas[max - 1 - i] = num;
    }
    bool isPalindrome = true;
    for (int pop = 0; pop < max; pop++) {
        if (mas[pop] != mas_2[pop]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}```

## task_06.cpp
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n <= 0) {
        return 0;
    }

    vector<int> values(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
    cout << values[0];
    for (int i = 1; i < n; i++) {
        if (values[i] != values[i - 1]) {
            cout << " " << values[i];
        }
    }
    cout << endl;

    return 0;
}```

## task_1.cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max = 0;
    int sum = 0;
    cin >> max;
    vector<int> values(max);
    for (int i = 1; i <= max; i++){
        cin >> values[i];
    }
    for( int j = 0; j <= max; j++){
        sum += values[j];
    }
    cout << sum << endl;
}
 ```

## task_10.cpp
```cpp
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
};```

## task_11.cpp
```cpp
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};```

## task_12.cpp
```cpp
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};```

## task_2.cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max{0};
    cin >> max;
    vector<int> values(max);
    for (int i = 1; i <= max; i++){
        cin >> values[i];
    }
    int even{0};
    for(auto j : values){
        if(j == 0){
            continue;
        }else if(j % 2 == 0){
            even += 1;
        }
    }
    cout << even << endl;
}```

## task_3.cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max = 0;
    cin >> max;
    vector<int> values(max);
    int max_values_1 = values[0];
    int index = 0;
    for (int i = 1; i <= max; i++){
        cin >> values[i];
    }
    for(int j = 0; j <= max; j++){
        if(values[j] >= max_values_1){
            max_values_1 = values[j];
            index = j - 1;
        }
    }
    cout << "Максимально значение " << max_values_1 << " " << "Индекс " << index << endl;
}
```

## task_4.cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int max;
    cin >> max;
    vector<int> mas(max);
    vector<int> mas_2(max);
    for (int j = 0; j < max; j++) {
        cin >> mas[j];
        mas_2[j] = mas[j];
    }
    for(int i = 0; i < max;i++){
        mas[i] = mas_2[max - 1 - i];
    }
    for(int el : mas){
        cout << el << endl;
    }
}```

## task_5.cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max = 0;
    int number = 0;
    int sum = 0;
    cout << "Enter number" << endl;
    cin >> number;
    cout << "Enter size of array" << endl;
    cin >> max;
    vector<int> values(max);
    cout << "Enter elements of array" << endl;
    for (int i = 1; i <= max; i++){
        cin >> values[i];
    }
    for(int el : values){
        if(el == number){
            sum += 1;
        }
    }
    cout << "count " << endl;
    cout << sum << endl;
}```

## task_6.cpp
```cpp
#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n) || n <= 0) {
        std::cout << std::endl;
        return 0;
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    bool first = true;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            if (!first) {
                std::cout << " ";
            }
            std::cout << arr[i];
            first = false;
        }
    }

    std::cout << std::endl;
    return 0;
}```

## task_7.cpp
```cpp
#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n)) {
        return 0;
    }

    std::vector<int> counts(101, 0);
    
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        if (val >= 0 && val <= 100) {
            counts[val]++;
        }
    }

    for (int v = 0; v <= 100; ++v) {
        if (counts[v] > 0) {
            std::cout << v << ":" << counts[v] << "\n";
        }
    }

    return 0;
}```

## task_8.cpp
```cpp
#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) {
        return 0;
    }

    long long main_sum = 0;
    long long secondary_sum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int val;
            std::cin >> val;
            if (i == j) {
                main_sum += val;
            }
            if (i + j == n - 1) {
                secondary_sum += val;
            }
        }
    }

    std::cout << main_sum << " " << secondary_sum << "\n";

    return 0;
}```

## task_9.cpp
```cpp
#include <iostream>
#include <vector>

int main() {
    int r, c;
    if (!(std::cin >> r >> c)) {
        return 0;
    }

    std::vector<std::vector<int>> matrix(r, std::vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < c; ++j) {
        for (int i = 0; i < r; ++i) {
            std::cout << matrix[i][j];
            if (i < r - 1) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}```


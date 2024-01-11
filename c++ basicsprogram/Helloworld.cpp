// #include <iostream>

// // Forward declaration of the Calculator class
// class Calculator;

// // Friend function declaration
// int add(const Calculator& calcObj);

// // Calculator class definition
// class Calculator {
// private:
//     int num1;
//     int num2;

// public:
//     Calculator(int a, int b) : num1(a), num2(b) {}

//     // Friend function is declared as a friend inside the class
//     friend int add(const Calculator& calcObj);
// };

// // Friend function definition
// int add(const Calculator& calcObj) {
//     // Accessing private members of the Calculator class
//     return calcObj.num1 + calcObj.num2;
// }

// int main() {
//     // Creating an object of the Calculator class
//     Calculator myCalculator(5, 10);

//     // Calling the friend function to perform addition
//     int result = add(myCalculator);

//     // Displaying the result
//     std::cout << "Sum: " << result << std::endl;

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    cout<<"Hello world";
    return 0;
}
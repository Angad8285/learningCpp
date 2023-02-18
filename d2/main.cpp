#include <iostream>
#include <string>

using namespace std;

// int addNumbers(int num1, int num2) {
//     int result = num1 + num2;
//     return result;
// }

void main1() {
//    std::cout << "Hello World" << std::endl;
//    std::cout << "sdfsdf" << std::endl;

//    int sum = addNumbers(12, 3);
//    std::cout << "sum1 = " << sum << std::endl;

//    std::cout << "sum2 = " << addNumbers(12, 4) << std::endl;

////////// INPUT OUTPUT
std::string helo = "hello world";
std::cout << helo << std::endl;

std::string noSpaceIn;
std::cout << "enter input (without space)" << std::endl;
std::cin >> noSpaceIn;
std::cout << "Your input was: " << noSpaceIn << std::endl;

std::string spaceIn;
// std::getline(std::cin, spaceIn);

std::cout << "enter input (with space)" << std::endl;
std::getline(std::cin, spaceIn);
std::cout << "Your input was: " << spaceIn << std::endl;


}

int main2(){
int number1 = 15; // Decimal
int number2 = 017; // Octal
int number3 = 0x0F; // Hexadecimal
int number4 = 0b00001111; // Binary
std::cout <<"number 1 : " << number1 << std::endl;
std::cout <<"number 2 : " << number2 << std::endl;
std::cout <<"number 3 : " << number3 << std::endl;
std::cout <<"number 4 : " << number4 << std::endl;

return 0;
}

int main() {
    // int num {};
    // // int num2 ();
    // cout << num;
//     std::string empty_string {};
//   std::cout << "Empty string: " << empty_string << std::endl;
    // unsigned  double num {234353909667578666644474546634};
    // cout << num;
    // bool b1 {1}, b2 {};
    // cout << boolalpha << b1 << endl;
    // cout << b2;
    // char c1 {};
    // cout << c1;

    // char message[] {'h', 'e', 'l', 'l', 'o','\0'};

    // cout << message << endl;
    // cout << size(message) << endl;

    // int* p {nullptr};
    // cout << nullptr;

    // char* pMessage { "HELLO"};
    // cout << pMessage << endl;
    // cout << *pMessage;

    // *pMessage = 'B';
    // cout << pMessage;
    // cout << *pMessage;

    size_t size{3};
}
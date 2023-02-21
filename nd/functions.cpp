#include <iostream> 
using namespace std;

void func(string country = {"Norway"}) {
    cout << country << endl;
}// We can use default values for parameters to functions.

int viscous(int num) {
    return num+5;
}

main() {
    func("Sweden");
    func();
    func("Finland");

    cout << viscous(5);
}


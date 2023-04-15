#include <iostream>
// #include <iomanip>
// #include <cstdarg>

using namespace std;
// int nain() {return 2;}

// int findMax (int count, ...) {
//     int max, value;
//     va_list list;
//     va_start (list, count);

//     max = va_arg(list, int);
//     for (int arg = 1; arg < count; ++arg) {
//         value = va_arg(list, int); 
//         if(max < value)
//             max = value;
//     }

//     va_end (list);
//     return max;
// }

// int main() {
//     // int m = 1, n = 10, o = 10000;

//     // cout << "m = " << setw(5) << m << endl;
//     // cout << "n = " << setw(5) << n << endl;
//     // cout << "o = " << setw(5) << o << endl;
//     // cout << main();
//     // return 44;

//     cout << findMax (5,14.0, 15,"Hello",13,10) << endl;
//     cout << findMax (3, 10, 3.5, 12) << endl;

//     return 1;

    
// }

// // int nain( int p, ...);

// // main() {
// //     cout << nain(3, 'A');
// // }

// // int nain(int x, ...) {
// //     return x + y;
// // }

// void swap( int &one, int &two) {
//     int bin = two;
//     two = one;
//     one = bin;

//     cout << "one: " << one << endl;
//     cout << "two: " << two << endl;
// }

// main() {
//     int one = 1, two = 2;
//     swap(one, two);
//     cout << "in main" << endl;
//     cout << "one: " << one << endl;
//     cout << "two: " << two << endl;

// }\\\\\





// class length {
//     protected: 
//     int l;
//     public: length( int len);
    
// };

// length::length(int len)

// int main() {
//   std::cout << "Hello, world!\a" << std::endl;
//   return 0;
// }

// class classs {
//     public:
//     int i;
//     void increment(classs &obj);
//     friend int decrement(classs &obj);
// };
// void classs::increment(classs &obj) {
//         obj.i *= 2;
//         cout << "value of i in object is: " << obj.i << endl;
//     }


// int decrement(classs &obj) {
//     obj.i /= 2;
//     cout << "Value of i in the friend function object is: " << obj.i << endl;
// }

// main() {
//     classs object;
//     object.i = 2;
//     object.increment(object);
//     cout << "value of object.i after increment and before decrement is: " << object.i << endl;
//     decrement(object);
//     cout << "value of object.i after decrement function is: " << object.i << endl;
// }

class vlasss;
class classs {
    int i;
    public: 
        void setValue(int y);
        bool compare(classs obj1, vlasss obj2);
};

class vlasss {
    int j;
    public: 
        friend void classs::setValue(int i);
        friend bool classs::compare(classs obj1, vlasss obj2);
};

void classs::setValue(int y) {
    i = y;
    cout << "y was: " << y << "i is: " << i << endl;
}

bool classs::compare(classs obj1, vlasss obj2) {
    cout << (obj1.i > obj2.j)? "classs": "vlasss";
}

main() {
    classs o1;
    vlasss o2;

    o1.setValue(2);
    o2.setValue(3);
    
}
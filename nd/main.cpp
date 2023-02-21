#include <iostream>
// #include <string>
using namespace std;

// class cylinder {
//     public :
//     int base, height;
//     cylinder(){
//         int base = 1;
//         int height = 8;
//     }
//     cylinder(int basep, int heightp) {
//        int base = base;
//        int height = height;
//     }
//     double volume() {
//         return base * height;
//     }
//     // private :

//     // int base {2};
//     // int height {2};
// }
// ;
// int main () {
//     cylinder c;
//     cout << "Hello World" << endl;
//     cout << "volume " << c.volume() << endl;
//     cylinder c1(1,3);
//     cout << "volume " << c1.volume() << endl;
//     // c.base = 4;
//     // c.height = 4;
//     // cout << "volume " << c.volume() << endl;
// }

// int main() {
//     int a, b, c;
//     cin >> a;
//     cin >> b;
//     c = a + b;
//     cout << c;
// }

// main() {
    // cout<< "hello world";
    // int a, b, c;
    // a = b = c = 4;
    // printf("%d ", a + b + c);
    // cout << a + b + c;
//     float f1 = 35e3;
// double d1 = 12E4;
// cout << f1 << "\n";
// cout << d1;
//     char a = 65, b = 66, c = 67;
// cout << a;
// cout << b;
// cout << c;

// string hello {"hello"};

// cout << hello;
// }


// main() {;}
// main() {
//     std::string firstName = "John ";
// string lastName = "Doe";
// string fullName = firstName.append(lastName);
// cout << fullName;
// cout << firstName;
// int num = 1;
// std::cout << firstName.length();
// }

// int main() {
    // int day = 20;
    // string msg = (day>20)? "Hello" : "Bye";
    // cout << msg;

//     int day = 6;
// switch (day) {
//   case 6:
//     cout << "Today is Saturday\n";
//     // break;
//   case 7:
//     cout << "Today is Sunday\n";
//     // break;
//   default:
//     cout << "Looking forward to the Weekend\n";
// }
    
//     int nums[] {1, 2, 3, 4, 5};
//     for ( int i : nums) {
//         cout << i;
//     }

    // int arr[3] = {1, 2, 3};
    // for ( int i : arr) {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < 3; i++) {
    //     cout << arr[i] << ' ';
    // }
    // cout << endl;
    // arr[2] = 3; 
    // for ( int i : arr)
    //     cout << i << ' ';


    // cout << endl<< "The program ends here.";
// }

// main() {
//     int myNumbers[]  {10, 20, 30, 40, 50};
// for (int i : myNumbers) 
//   cout << i << "\n";

// }

// main() {
//     int arr[] {1, 2, 3};
//     // arr[1] = 1;

//     for (int i : arr) {
//         cout << i << "";
//     }
//     cout << endl;

//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
// }
// main() {
//     int four = 4; 
//     int* fourPtr = &four;
//     int& fourRef = four;

//     cout << "four: " << four << endl;
//     // cout << "*four: " << *four << endl; // This is invalid becouse the dereference operator requires a pointer.
//     cout << "&four: " << &four << endl;
//     cout << "fourPtr: " << fourPtr << endl;
//     cout << "*fourPtr: " << *fourPtr << endl;
//     cout << "&fourPtr: " << &fourPtr << endl;
//     cout << "fourRef: " << fourRef << endl;
//     // cout << "*fourRef: " << *fourRef << endl; // This is invalid for the same reasons.
//     cout << "&fourRef: " << &fourRef << endl;

//     cout << endl << endl << "fourRef = 6" << endl << endl;
    
//     fourRef = 6;
//     cout << "four: " << four << endl;
//     cout << "&four: " << &four << endl;
//     cout << "fourPtr: " << fourPtr << endl;
//     cout << "*fourPtr: " << *fourPtr << endl;
//     cout << "&fourPtr: " << &fourPtr << endl;
//     cout << "fourRef: " << fourRef << endl;
//     cout << "&fourRef: " << &fourRef << endl;

//     cout << endl << endl << "*fourPtr = 8" << endl << endl;

//     *fourPtr = 8;
    
//     cout << "four: " << four << endl;
//     cout << "&four: " << &four << endl;
//     cout << "fourPtr: " << fourPtr << endl;
//     cout << "*fourPtr: " << *fourPtr << endl;
//     cout << "&fourPtr: " << &fourPtr << endl;
//     cout << "fourRef: " << fourRef << endl;
//     cout << "&fourRef: " << &fourRef << endl;

//     // fourPtr = &12; //This means nothing because '12' has no address because it is not stored in any memory.

//     // cout << "four: " << four << endl;
//     // cout << "&four: " << &four << endl;
//     // cout << "fourPtr: " << fourPtr << endl;
//     // cout << "*fourPtr: " << *fourPtr << endl;
//     // cout << "&fourPtr: " << &fourPtr << endl;
//     // cout << "fourRef: " << fourRef << endl;
//     // cout << "&fourRef: " << &fourRef << endl;
   
//     cout << endl << endl << "fourPtr = &twelve" << endl << endl;
//     int twelve = 12;
//     fourPtr = &twelve;

//     cout << "four: " << four << endl;
//     cout << "&four: " << &four << endl;
//     cout << "fourPtr: " << fourPtr << endl;
//     cout << "*fourPtr: " << *fourPtr << endl;
//     cout << "&fourPtr: " << &fourPtr << endl;
//     cout << "fourRef: " << fourRef << endl;
//     cout << "&fourRef: " << &fourRef << endl;
//     // int* oldFourPtrAddress = (int *)0x16ef06fb4;
//     // cout << endl << "*oldFourPtrAddress" << *oldFourPtrAddress<< endl;

//     // This changes fourPtr only. Its like, now the pointer on the holds some other memory address
//     // and has lost control over the last one.
    

//     cout << 'The program ends here.';
// }




// class MyClass {     // The class
//   public:           // Access specifier
//     MyClass() {     // Constructor
//       cout << "Hello World!";
//     }
// };

// int main() {
//   MyClass myObj;    // Create an object of MyClass (this will call the constructor)
//   return 0;
// }

class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  return 0;
}

// It is possible to access private members of a class using a public method inside the same class
// Read articles from ww3 schools.
// Done with the overview part
// will now solely read e balaguruswamy for thorough understanding
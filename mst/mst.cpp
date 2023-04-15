#include<iostream>
#include <cstring>
#include<cmath>
using namespace std;


////////////////////////////////////////////// Global varaibles
// int s = 10;
// main() {
//     int s = 20;
//     cout << "Global " << ::s;
//     cout << "Local " << s;
// }


////////////////////////////////////////////// Static varables in classes
// class test {
//     static int x;
//     public:
//         static int y;
//         void func(int x) {
//             cout << "Static value of x: " << test::x;
//             cout << "Input or local value of x: " << x;
//         }
// };

// int test::x = 1;
// int test::y = 2;

// main() {
//     test obj;
//     obj.func(3);
//     cout << "\nValue of static variable y: " << test::y;
// }


///////////////////////////////////////////// Nested Classes
// class encloser {
//     private:
//         int privateVarEnc = 10;
//     public:
//         int publicVarEnc = 20;
//         class nest {
//             private:
//                 int privateVarNest = 1;
//             public:
//                 int publicVarNest = 2;
//                 void getData(encloser e) {
//                     cout << "////////////// NESTED CLASS /////////////"<< endl;
//                     cout << "public Varible of nest class: " << publicVarNest << endl;
//                     cout << "private varible of nest class: " << privateVarNest << endl;
//                     cout << "public variable of encloser class: " << e.publicVarEnc << endl;
//                     cout << "private variable of encloser class: " << e.privateVarEnc << endl;
//                 }
//         };
//         void getData( nest n){
//             cout << "//////////////// ENCLOSER CLASS /////////////////" << endl;
//             cout << "public Varible of nest class: " << n.publicVarNest << endl;
//             // cout << "private varible of nest class: " << n.privateVarNest << endl;   // Member functions of the enclosing class cannot access the private data members of the nested class but the reverse is possible.
//             cout << "public variable of encloser class: " << publicVarEnc << endl;
//             cout << "private variable of encloser class: " << privateVarEnc << endl;
//         }
// };

// main() {
//     encloser encObject;
//     encloser::nest nestObject;
//     encObject.getData(nestObject);
//     nestObject.getData(encObject);
// }


//////////////////////////////////// VARIBLE INITIALISATION 
// main() {
//     int a{};
//     cout << a;
// }

/////////////////////////////////////// CALL BY VALUE
// class convert {
//     private:
//         int x =2;
//     public: 
//         void increment(convert obj) {
//             obj.x = obj.x*2;
//             cout << "Value of obj.x in increment function: " << obj.x << endl;
//         }
//         void printx() {
//             cout << "Value of obj.x is: " << x << endl;
//         }
// };  
// main() {
//     convert abc;
//     abc.increment(abc);
//     abc.printx();    
// }


/////////////////////////////////////// CALL BY REFERENCE
// class convert {
//     private:
//         int x =2;
//     public: 
//         void increment(convert &obj) { // ONLY EXTRA THING IS THE '&' SYMBOL
//             obj.x = obj.x*2;
//             cout << "Value of obj.x in increment function: " << obj.x << endl;
//         }
//         void printx() {
//             cout << "Value of obj.x is: " << x << endl;
//         }
// };  
// main() {
//     convert abc;
//     abc.increment(abc);
//     abc.printx();    
// }


///////////////////////////////////// NESTING OF MEMBER FUNCTIONS
// class q {
//     int arr[5];
//     int largest (int a[5]);
//     public:
//         void getData() {
//             for (int i = 0; i < 5; i++) {
//                 int input;
//                 cin >> input;
//                 arr[i] = input;
//             }

//             for (int i = 0; i < 5; i++) {
//                 cout << arr[i] << ' ';
//             }
//         }
//         int display() {
//             cout << "called display" << endl;
//             cout << largest(arr);
//         }
// };
// int q::largest (int a[5]) {
//     // cout << 
//     int max = a[0];
//     for (int i = 1; i < 5; i++ ) {
//         if (a[i] > max) 
//         max = a[i];
//     }
//     return max;
// }

// main() {
//     q qobj;
//     qobj.getData();
//     cout << endl;
//     qobj.display();
// }

/////////////////////////////////////////// FRIEND FUNCTION
// class a {
//     int x = 10;
//     public:
//         friend void display (a obj);
// };

// void display ( a job) {
//     cout << job.x;
// }

// main() {
//     a boj;
//     display(boj);
// }

// const int IDLE = 0;
// const int INUSE = 1;
// class C2; // forward declaration
// class C1 {
// 	int status;
//     public:
// 	void set_status(int state);
// 	int idle(C2 b);
// };
// class C2 {
// 	int status;
//     public:
// 	void set_status(int state);
// 	friend int C1::idle(C2 b);
// };
// void C1::set_status(int state)
// {	status = state;	}
// void C2::set_status(int state)
// {	status = state;	}
// int C1::idle(C2 b)
// {	if(status || b.status)
//  		return 0;
// 	else
//  		return 1;
// }
// int main()
// {	C1 x;
// 	C2 y;
// 	x.set_status(IDLE);
// 	y.set_status(IDLE);
// 	if(x.idle(y))
//  		cout << "Screen can be used.\n";
// 	else
//  		cout << "In use.\n";
// 	x.set_status(INUSE);
// 	if(x.idle(y))
//  		cout << "Screen can be used.\n";
// 	else
//  		cout << "In use.\n";
// 	return 0;
// }



///////////////////////////////////////////////// CONSTRUCTORS
// class example{
//     int a;
//     public:
//         example(int);
//         void display() {
//             cout << a;
//         }
// };
// example::example(int x) {
//     a = x;
// }

// main() {
//     example e1 = 3;
//     example e2=example(2);
//     e1.display();
//     cout << endl;
//     e2.display();
// }


////////////////////////////////////////////// LAB ASSIGNMENT 2

///////////////////////// QUESTION 1
// class rectangle {
//     int l;
//     int b;
//     public: 
//         rectangle();
//         rectangle(int, int);
//         rectangle(int);
//         int findArea();
// };

// rectangle::rectangle() {
//     l = 0;
//     b = 0;
// }
// rectangle::rectangle(int x, int y) {
//     l = x;
//     b = y;
// }
// rectangle::rectangle(int a) {
//     l = a;
//     b = a;
// }

// int rectangle::findArea() {
//     return l*b;
// }

// main() {
//     rectangle rec1;          //DONT USE BRACKETS WHEN YOU DONT HAVE PARAMETERS TO PASS IN.
//     rectangle rec2(1,2);
//     rectangle rec3(2);

//     cout << rec1.findArea() << endl;
//     cout << rec2.findArea() << endl;
//     cout << rec3.findArea() << endl;
// }

////////////////////// QUESTION 3
// class abc {
//     int z;
//     public:
//         abc(int a) {
//             z = a;
//             cout << "z is: " << z << endl;
//         }
//         ~abc() {
//             cout << "patan-e-tabish" << endl;
//         }

// };

// main() {
//     abc obj(1);
// }

////////////////////////////// QUESTION 6
// class c2;
// class c1 {
//     int x;
//     public:
//         friend int add( c1, c2);
//         c1();
//         void display() {
//             cout << x << endl;
//         }
// };
// class c2 {
//     int y;
//     public:
//         friend int add (c1, c2);
//         c2();
//         void display() {
//             cout << y << endl;
//         }
// };

// int add(c1 a, c2 b) {
//     return a.x + b.y;
// }
// c1::c1() {
//     x =10;
// }
// c2::c2() {
//     y = 20;
// }

// main() {
//     c1 p;
//     c2 q;
//     cout << add(p, q);
// }

// class mcb {
//     int i;
//     public:
//         mcb() {
//             i = 44;
//         }
//         mcb(int a) {
//             i = a;
//         } 
//         void set_i(int a) {
//             i = a;
//         }
//         void display() {
//             cout << i << endl;
//         }
// };
// mcb func() {
//     mcb nboj(88);
//     // nboj.set_i(33);
//     return nboj;
// }

// main() {
//     mcb obj;
//     obj.display();
//     obj = func();
//     obj.display();
// }

///////////////////////////////////// NEW & DELETE
// main() {
//     char * ptr;
//     ptr = new char;
//     *ptr = 'a';
//     cout << &ptr << endl;
//     cout << ptr << endl;
//     cout << *ptr << endl;
//     *ptr = 'b';
//     cout << &ptr << endl;
//     cout << ptr << endl;
//     cout << *ptr << endl;
//     delete ptr;
//     ptr = NULL;
//     // cout << *ptr << endl;  // This is fatal, you cannot dereference a NULL pointer.
// }
// main () {
//     char *ptr;
//     ptr = new char[6];
//     // *ptr = "hello";
//     strcpy(ptr, "hello");
//     for (int i = 0; i < 5; i++ ) {
//         cout << (*(ptr+i)) << endl;
//     }
    
//     ptr[0] = 'z';
//     cout << *ptr << endl;
//     delete [] ptr;
//     ptr = NULL;
// }

// main() {
//     int * p;
//     p = new int;
//     *p = 22;
//     cout << p << endl;
//     cout << *p << endl;
//     delete p;
//     p = NULL;
//     cout << "...................";
//     char * ptr;
//     ptr = new char {'a'};
//     cout << ptr << endl;
//     cout << *ptr << endl;
// }

// main() {
//     int four = 4;
//     int &five = four;
//     cout << four << endl;
//     cout << five << endl;
//     cout << &five << endl;
//     // cout << *five << endl; //This has no meaning
//     cout << *&five << endl;
//     five = 5;
//     cout << ",,,,,,,,,,,,,,,,,,,,,,\n";
//     cout << four << endl;
//     cout << five << endl;
//     cout << &five << endl;
//     // cout << *five << endl; //This has no meaning
//     cout << *&five << endl;
// }

// class cl {
//     int i;
//     public:
//         cl(int j) {i = j;}
//         void display() {cout << i;};
// };
// main() {
//     cl ob(44);
//     ob.display();
//     cout << endl;
//     cl *p;
//     p = &ob;
//     p->display();

//     ob(33);
//     ob.display
// }

// class cl {
//     int i;
//     public:
//         cl() {
//             i = 0;
//         }
//         cl (int j) {
//             i = j;
//         }
//         int get_i() {
//             return i;
//         }
// };

// main() {
//     cl obj[3] = {1, 2, 3}, *p;
//     p = obj;
//     for(int i= 0; i < 3;i++){
//         cout << p->get_i()<< endl;
//         p++
//         ;
//     }
//     cout << obj[2].get_i();
// }

// class cl {

//     int i;
//     public: 
//         static int count;
//         cl(int j) {
//             i = j;
//             count++;
//         }
//         void display() {
//             cout << i << endl;
//         }
// };
// int cl::count = 1;
// main () {
//     cl ob1(1);
//     cout << cl::count;
//     ob1.display();
// }

// class person {
//     int age;
//     char name[50];
//     public: 
//         void set_data(char *str, int a) {
//             strcpy(name, str);
//             age = a;
//         }
//         void display() {
//             cout << name << "with age " << age; 
//         }
//         person& younger(person p2) {
//             if (p2.age < this->age) {
//                 return p2;
//             } else {
//                 return *this;
//             }
//         }
// };
// main() {
//     person p1, p2, p3;
//     p1.set_data("akhil", 19);
//     p2.set_data("Putin", 76);
//     p3 = p1.younger(p2);
//     p3.display();
// }

// class test {
//     public:
//     int i;
//     void display() {
//         cout << endl << i << endl;
//     }
// };

// main() {
//     int test::*p = &test::i;
//     test t;
//     t.*p = 3;
//     t.display();
//     test *tp = new test;
//     tp->*p = 4;
//     tp->display();
// }

//////////////////////////////////////////////////////////////////// LAB ASSIGNMENTS

/////////////// LA 2
////// Q2
// class reclass {
//     int l;
//     int b;
//     public:
//         reclass() {
//             l = 0;
//             b = 0;
//         }
//         reclass(int i, int j) {
//             l = i;
//             b = j;
//         }
//         int area() {
//             return l*b;
//         }
// };
// main() {
//     reclass rectangles[5];
//     for (int i = 0; i < 5; i++) {
//         rectangles[i] = reclass(i, i+1); //This line of code is important
//         cout << rectangles[i].area() << endl;
//     }   
// }

///////// Q3
// int i = 10;
// class test {
//     static int a;
//     int i;
//     public:
//         void display();
//         test(int);
// };
// test::test(int a) {
//     i = a;
// }
// void test::display() {
//     cout << i;
//     cout << ::i;
//     cout << a;
// }
// int test::a = 99;

// main() {
//     test obj(3);
//     obj.display();
// } // We cannot assign a value to the static variable in the class, on the same line of its declaration.

/////////// Q4
// inline int cube (int i) {
//     return i*i*i;
// }
// main() {
//     cout << cube(4);
// }

/////////// Q5
// int i = 30;
// class test {
//     // int i = 20;
//     public:
//         static int i;
//         void display() {
//             cout << "local i: " << i << endl;
//         }
// };
// int test::i = 10;
// main() {
//     // test t;
//     // t.display();
//     int i = 20;
//     cout << "local variable: " << i << endl;
//     cout << "static public variable: " << test::i << endl;
//     cout << "Global variable: " << ::i << endl;
// }

//////////// Q6
// class test {
//     int i;
//     public:
//         static void data (int j) {
//             i = j;
//             cout << i;
//         }
// };

// main() {
//     test t;
//     t.data(4);
// } ///                           A STATIC FUNCTION MEMBER CANNOT ACCESS THE NON STATIC DATA MEMBERS OF A CLASS;


//////////////////////////////// LA 3

////////// Q2
// class rectangle {
//     int l;
//     int b;
//     public: 
//         rectangle(int a = 0, int b = 0);
//         int findArea();
//         ~rectangle() {
//             cout << l << " & " << b << " destroyed." << endl;
//         }
// };

// rectangle::rectangle(int x, int y) { //When defining a member function with default arguments do not give the default values of the variables
//     l = x;
//     b = y;
//     cout << "constructor called." << endl;
// }

// int rectangle::findArea() {
//     return l*b;
// }

// int main() {
//     rectangle rec[6];

//     for (int i =0; i < 6; i++) {
//         rec[i] = rectangle(i, i+1);
//         cout << rec[i].findArea() << endl;
//     }
//     return 0;
// }

/////////////// Q4
// class test {
//     int i;
//     public:
//         test();
//         test(int);
//         void display();
//         inline void increment();
//         ~test();
// };
// test::test() {
//     cout << "no argument constructor was called." << endl;
// }
// test::test(int a) {
//     i = a;
//     cout << "i was set to " << a << endl;
// }
// void test::display() {
//     cout << "the value of i is: " << i << endl;
// }
// inline void test::increment() {
//     i*=2;
//     cout << "i was doubled." << endl;
// }
// test::~test() {
//     cout << "patan-e-tabish" << endl;
// }

// main() {
//     // test obj(3);
//     // obj.increment();
//     // obj.display();

//     test * obj = new test(5);
//     obj->increment();
//     obj->display();
//     delete obj;
//     obj = NULL;
// }

//////////// Q5
// class b;
// class a {
//     int one;
//     public: 
//         a (int p) {
//             one = p;
//         }
//         void display() {
//             cout << "The value of one of a class is: " << one << endl;
//         }
//         void swap(b&);
// };
// class b {
//     int two;
//     public:
//         b(int q) {
//             two = q;
//         }
//         void display() {
//             cout << "The value of two of class b is: " << two << endl;
//         }
//         friend void a::swap(b&);
// };

// void a::swap(b &B) {
//     int bin = one;
//     one = B.two;
//     B.two = bin;
//     cout << "Swap done." << endl;
// }

// main() {
//     a A(1);
//     b B(2);
//     A.display();
//     B.display();
//     A.swap(B);
//     A.display();
//     B.display();
// }

// class a {
//     private:
//         int pri = 1;
//     protected:
//         int pro = 2;
//     public:
//         int pub = 3;
// };

// class b:private a {

// };

// main() {
//     a aobj;
//     b bobj;
//     // cout << aobj.pri << endl;//Not Possible
//     // cout << aobj.pro << endl;//Not Possible
//     cout << aobj.pub << endl;
//     cout << bobj.pri << endl;//Not Possible
//     cout << bobj.pro << endl;//Not Possible
//     cout << bobj.pub << endl;
// }

////////////////////////////////// INHERITANCE
// class a {
//     int a;
//     public:
        
//         void set_a(int i) {
//             a = i;
//         }  
//         int get_a () {
//             return a;
//         }
// };

// class b {
//     protected:
//         int square(int i) {
//             return i*i;
//         }
//         int cube(int i) {
//             return i*i*i;
//         }
// };

// class c: protected a, protected b {
//     public:
//         c(int j) {
//             set_a(j);
//             cout << get_a() << endl;
//         }
//         int exeCube() {
//             return cube (get_a());
//         }
//         int exeSquare() {
//             return square(get_a());
//         }
//         ~c() {
//             cout << "patan-e-tabish" << endl;
//         }
// };

// main() {
//     c obj(3);
//     cout << obj.exeCube() << endl;
//     cout << obj.exeSquare() << endl;
// }

// class a {
//     protected:
//         int i;
//         int square(int i) {
//             return i*i;
//         }
//         int cube(int i) {
//             return i*i*i;
//         }
// };

// class cu: protected a {
//     public:
//         cu(int j) {
//             i = j;
//         }
//         int exeCube() {
//             return cube(i);
//         }
// };

// class sq: protected a {
//     public: 
//         sq (int j) {
//             i =j;
//         }
//         int exeSquare() {
//             return square(i);
//         }
// };

// main() {
//     cu objcu(3);
//     cout << objcu.exeCube() << endl;
//     sq objsq(3);
//     cout << objsq.exeSquare() << endl;
// }


// class fruit {
//     public:
//         static int count;
//         fruit() {
//             count++;
//             cout << "A fruit was added." << endl;
//         }
// };
// class apple: public fruit {
//     static int appleCount;
//     public:
//         apple() {
//             appleCount++;
//             // count++;
//             cout << "An apple was added." << endl;
//         }
//         void display() {
//             cout << "There are " << fruit::count << " and " << apple::appleCount << " apples in the basket" << endl;
//         }
// };
// class mango: public fruit {
//     static int mangoCount;
//     public:
//         mango() {
//             mangoCount++;
//             // count++;
//             cout << "A mango was added." << endl;
//         }
//         void display() {
//             cout << "There are " << fruit::count << " and " << mango::mangoCount << " mangoes in the basket" << endl;
//         }
// };
// int fruit::count = 0, apple::appleCount = 0, mango::mangoCount = 0;

// main() {
//     mango mobj;
//     apple aobj;
//     aobj.display();
//     mobj.display();
// }

// class a {
//     int x;
//     public:
//         a (int i) {
//             cout << "a constructor was called." << endl;
//             x = i;
//         }
//         void display() {
//             cout << "value of x in a class is: " << x << endl;
//         }
//         class b {
//             int y;
//             public:
//                 b (int j) {
//                     cout << "b constructor was called." << endl;
//                     y =j;
//                 }
//                 void display() {
//                     cout << "value of y in b class is: " << y << endl;
//                 }
//         };
// };
// main() {
//     a aobj(3);
//     aobj.display();
//     a::b bobj(4);
//     bobj.display();
// }

// class a {
//     int i;
//     public:
//         a (int j = 0);
//         void display() {
//             cout << i << endl;
//         }
// };
// a::a (int j) {
//     i = j;
// }

// main() {
//     a obj;
//     obj.display();
// }

// class a {
//     public:
//         int i;
//         void setI(int i) {
//             this->i = i;
//         }
//         void display() {
//             cout << i << endl;
//         }
// };

// main() {
//     a obj;
//     int a:: *ptri = &a::i;
//     obj.*ptri = 19;
//     obj.display();
//     void (a:: *ptrf)(int) = &a::setI; 
//     (obj.*ptrf)(4);
//     obj.display();
// }

// class matrix {
//     const int l;
//     int *arr;
//     public: 
//         matrix(int q) :l(q) {
//             arr = new int[l];
//             for (int i = 0; i < l; i++) {
//                 cin >> arr[i];
//             }
//         }
//         void display() {
//             cout << l << endl;
//             for (int i = 0; i < l; i++) {
//                 cout << arr[i] << "\t";
//             }
//         }
// };

// main() {
//     matrix obj(4);
//     obj.display();

// }


// class a {
//     int s;
//     public:
//         a(int i = 0);
//         void display() {
//             cout << s << endl;
//         }
// };
// a::a(int i ) {
//     s = i;
//     cout << "constructor was called.";
// }
// main() {
//     a *ptr = new a(4);
//     // a obj;
//     // obj.display();
// }


// int main()
// {
// int x;
// int *p;
// int *q;
// p = new int[10];
// q =p;
// *p = 4;
// for (int j=0; j<10; j++) {
//     x = *p;
//     p++;
//     *p = x+ j;
// }
// for (int k = 0; k < 10; k++) {
//     cout << *q << " ";
//     q++;

// }
//  cout<<endl;
// return 0;
// }

// class Base
// { protected:
// int a; 
// public:
// Base ()
// { a=9; }
// void display()
// {
// cout<<"The output is"<<a;
// }
// };
// class Derived1: public Base {
// public:
// Derived1() { a=12; }
// };
// int main() {
//     Derived1 ob;
//     ob.display();
// }

// void poly(double a, double h)
// {
// cout<< "Function with float values called ";
// }
// void poly(int r, int s ) {
// cout << "Function with integer values called ";
// }
// int main()
// {
//     poly(7.5, 9.7);
//  }

// main() {
//     char name[20];
//     cin.getline(name, 20);
//     cout << name;
// }
// class property {
//     public:
//         property () {
//             cout << "constructer was called." << endl;
//         }
//         ~property() {
//             cout << "destructor was called." << endl;
//         }
// };

// main() {
//     property *ptr = new property[10];
//     delete [] ptr;
// }

// class triangle;
// class rectangle {
//     int length, breadth;
//     char colour[40];
//     public:
//         void setdata() {
//             cin>>length>>breadth;
//             // cin.getline(colour, 40);
//         }
//         friend int area(rectangle, triangle);
// };
// class triangle {
//     int s1, s2, s3;
//     char colour[49];
//     public: 
//         void setdata() {
//             cin>>s1>>s2>>s3;
//             // cin.getline(colour,49);
//         }
//         friend int area(rectangle, triangle);
// };

// int area(rectangle rec, triangle tri) {
//     int recarea = rec.length*rec.breadth;
//     int s = (tri.s1+tri.s2+tri.s3) / 2;
//     float triarea = sqrt(s*(s-tri.s1)*(s-tri.s2)*(s-tri.s3));
//     return recarea+ triarea;
// }

// main() {
//     rectangle robj;
//     triangle tobj;
//     robj.setdata();
//     tobj.setdata();
//     cout << area (robj, tobj) << endl;
// }
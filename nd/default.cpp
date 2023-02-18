#include<iostream>
using namespace std;



int f(int s=4, int a=5)
{
    return a*s;

}
int main()
{
  int r=f(3);
  cout << r;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //  pto

    // int a = 5, b, c ;
    // b = a = 15 ;
    // c = a < 15 ;
    // cout << "a = " << a << ", b = " << b << " , c = "<< c ;

    // pto 2
    // ! When comparing int and float, the int is implicitly converted to float before the comparison.
    // The comparison between 3.0f and 3.0 is true, so the output is "x and y are equal".
    // int x = 3 ;
    // float y = 3.0 ;
    // if (x == y)
    // cout <<"x and y are equal"  ;
    // else
    // cout << "x and y are not equal"  ;
    // pto
    int test = 0;
    cout << "First character " << '1' << endl;               //--> 1
    cout << "Second character " << (test ? 3 : '1') << endl; //-->1
    cout << int('1') << endl;
    cout << (false ? '1' : 3);

    //

    int a = 18;
    int b = 12;
    bool t = (a > 20 && b < 15) ? true : false;
    cout << "Value of t: " << t;
     

      

 
 
}
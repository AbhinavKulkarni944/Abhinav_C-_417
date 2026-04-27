#include <iostream>
using namespace std;
inline double cube (double s)
{
    return s*s*s;
}
int main()
{
    cout<< "The cube of 3 is: "<< cube(3);
    cout<< "The cube of 4 is: "<< cube(2);
    return 0;
}

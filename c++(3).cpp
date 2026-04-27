#include <iostream>
using namespace std;

class Addition
{
private:
    int a, b, sum;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void calculate()
    {
        sum = a + b;
    }

    void display()
    {
        cout << "Sum = " << sum;
    }
};

int main()
{
    Addition obj;     // Object creation

    obj.getData();    // Input
    obj.calculate();  // Process
    obj.display();    // Output

    return 0;
}

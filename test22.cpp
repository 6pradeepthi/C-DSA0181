#include <iostream>
#include<cmath>
using namespace std;
int power(int base, int exponent) 
{
    int result = 1;
    for (int i = 0; i < exponent; i++) 
	{
        result *= base;
    }
    return result;
}
double power(double base, double exponent) 
{
    return exp(exponent * log(base));
}
int main() 
{
    int intBase, intExponent;
    double doubleBase, doubleExponent;
    cout << "Enter an integer base and exponent: ";
    cin >> intBase >> intExponent;
    cout << "Power of " << intBase << " to " << intExponent << " is: " << power(intBase, intExponent) << endl;
    cout << "Enter a floating-point base and exponent: ";
    cin >> doubleBase >> doubleExponent;
    cout << "Power of " << doubleBase << " to " << doubleExponent << " is: " << power(doubleBase, doubleExponent) << endl;
    return 0;
}

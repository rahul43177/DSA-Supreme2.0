#include <iostream>
using namespace std;

int decimalToBinary(int decimal)
{
    if (decimal == 0)
        return;

    decimalToBinary(decimal / 2);
    cout << decimal % 2;
}

int main()
{
    int decimal = 13;

    decimalToBinary(decimal);
}
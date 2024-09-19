/*
* Author: Chase McCluskey
* Date: 9/19/24
* 
* Description: Find largest number
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double input1;
    double input2;
    double input3;

    cout << "Please enter 3 numbers: ";
    cin >> input1 >> input2 >> input3;
    double largest = input1;
    if (largest < input2) {
        largest = input2;
    }
    else if (largest < input3) {
        largest = input3;
    }
    cout << " The largest number is: " << largest;
}
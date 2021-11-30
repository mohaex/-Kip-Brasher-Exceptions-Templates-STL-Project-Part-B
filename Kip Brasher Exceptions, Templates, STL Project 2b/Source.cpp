/*
Name: Kip/Kasey Brasher
Date: 11/29/2021
Course: CIS 1202
*/


#include <iostream>
#include <cmath>
using namespace std;

template <class K>
K half(K number)
{
    return round(number) / 2.0;
}

int half(int intValue)
{
    return static_cast<int>( round ( (intValue / 2.0) ) ); 
}

int main() 
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    int intValue;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
   
    return 0;

    /*
    Ref:
    3.5
    2.5
    2
    */
}
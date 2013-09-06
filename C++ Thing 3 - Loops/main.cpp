//
//  main.cpp
//  C++ Thing 3 - Loops
//
//  Created by William Holt on 9/6/13.
//  Copyright (c) 2013 William Holt. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, const char * argv[])
{
    double hours = 0.00;
    double rate = 0.00;
    double drate = rate + (rate*0.5);

    double bux;

    cout << "Enter number of hours worked: ";
    cin >> hours;
    cout << "Enter hourly rate: ";
    cin >> rate;
    bux = hours * rate;
    cout << "Your salary is: " << setprecision(2) << fixed << bux << endl;


    return 0;
}

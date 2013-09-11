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
    double drate;
    double overtime;
    double otsal;
    double otbux;
    double bux;

    cout << "Enter number of hours worked: (-1 to end) ";
    cin >> hours;
    while (hours != -1) {
        cout << "Enter hourly rate: ($00.00) ";
        cin >> rate;
        if (hours >= 41) {
            bux = 40 * rate;
            drate = rate + (rate*0.5);
            overtime = hours - 40;
            otsal = drate * overtime;
            otbux = otsal + bux;
            cout << "Your salary is: " << setprecision(2) << fixed << otbux << endl;
            cout << "You worked " << overtime << " hours overtime." << endl;
            cout << "You made $" << otsal << " in overtime pay." << endl;
            cout << "You made $" << bux << " in regular pay." << endl;
        }
        else {
            bux = hours * rate;
            cout << "Your salary is: " << setprecision(2) << fixed << bux << endl;
        }
        cout << "Enter number of hours worked: (-1 to end) ";
        cin >> hours;
    }
    return 0;
    }

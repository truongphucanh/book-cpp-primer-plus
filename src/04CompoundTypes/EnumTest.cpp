#include <iostream>
#include "EnumTest.h"

using namespace std;

void enumTest(){
    Day today = sunday;
    cout << "today = " << today << endl;

    int int_today = today; // valid, enumerator -> int
    cout << "int_today = " << int_today << endl;

    // Day invalid_day = 1; // compile error, canot convert int to enum
    Day valid_day = Day(2); // valid, it's monday
    cout << "valid_day = " << valid_day << endl;

    Day undefined_day = Day(-1);
    cout << "undefined_day = " << undefined_day << endl;
}

// this code only works for positive number (minValue), the negative number is similar
void enumRangeTest(){
    int minValue = 0; // nothing
    int maxValue = 103;  // z
    int low = 0;
    int high = 127;

    if (minValue >= 0){
        low = 0;
    }
    else{
        // you need to find x that make -2^x <= minValue
        // then low = -2^x
    }

    int i = 0;
    // find i that make 2^i >= maxValue
    while (std::pow(2, i) < maxValue){
        i++;
    }
    // then, high = 2^i - 1
    high = std::pow(2, i) - 1;

    cout << "Range of enum with min value " << minValue << " and max value " <<  maxValue <<" is [" << low << " ," << high << "]" << endl;
}

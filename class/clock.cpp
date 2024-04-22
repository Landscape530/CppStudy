#include <iostream>
#include "clock.h"
using namespace std;

// int hl = 0;
// int test() {
//     cout<<"test"<<endl;
//     return 1;
// }

Myclock::Myclock(): hour(0),minute(0),second(0),v(0){};

Myclock::Myclock( int hour, int minute, int second ) : hour(hour),minute(minute),second(second){};

Myclock::~Myclock() {}

void Myclock::start() {

}

string Myclock::current_time() const {
    return "Now is "+ to_string(this->hour) + " : "+ to_string(this->minute) + " : "+ to_string(this->minute);
};

void Myclock::set_time( int hour, int minute, int second ) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
};


void t (int i) {
    cout<< i << endl;
};



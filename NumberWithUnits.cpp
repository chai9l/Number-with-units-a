#include <iostream>
#include <string>
#include "NumberWithUnits.hpp"

using namespace std;
using namespace ariel;

namespace ariel {
    void NumberWithUnits::read_units(ifstream &ifs){
        cout << "Needs to be implemented";
    }

    //Arithmetic operators
    NumberWithUnits NumberWithUnits::operator+(){
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits &num){
        return *this;
    }
    NumberWithUnits &NumberWithUnits::operator+=(const NumberWithUnits &num){
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator-(){
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits &num){
        return *this;
    }
    NumberWithUnits &NumberWithUnits::operator-=(const NumberWithUnits &num){
        return *this;
    }
            
    //Multipication operators
    NumberWithUnits operator*(const NumberWithUnits &num1, double num2){
        return num1;
    }
    NumberWithUnits operator*(double num1, const NumberWithUnits &num2){
        return num2;
    }
            
    //Boolean operators
    bool operator<(const NumberWithUnits &num1, const NumberWithUnits &num2){
        return true;
    }
    bool operator<=(const NumberWithUnits &num1, const NumberWithUnits &num2){
        return true;
    }
    bool operator>(const NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return true;
    }
    bool operator>=(const NumberWithUnits &num1, const NumberWithUnits &num2){
        return true;
    }
    bool operator==(const NumberWithUnits &num1, const NumberWithUnits &num2){
        return true;
    }
    bool operator!=(const NumberWithUnits &num1, const NumberWithUnits &num2){
        return true;
    }

    //Increment and Decrement operators
    NumberWithUnits &NumberWithUnits::operator++(){
        return *this;
    }
    NumberWithUnits &NumberWithUnits::operator++(int){
        return *this;
    }
    NumberWithUnits &NumberWithUnits::operator--(){
        return *this;
    }
    NumberWithUnits &NumberWithUnits::operator--(int){
        return *this;
    }

    //Ostream and Istream operators
    ostream& operator << (ostream& out, const NumberWithUnits& t){
        out << "Needs to be implemented";
        return out;
    }
    istream& operator >> (istream& in, NumberWithUnits& t){
        string temp = "Needs to be implemented";
        in >> temp;
        return in;
    }
}



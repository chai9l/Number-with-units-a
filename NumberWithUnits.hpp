#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel {
    class NumberWithUnits{
        //Atributes
        double val;
        string unit;


        public:
        //Getters and default builder
        double getVal(){return this->val;}
        string getUnit(){return this->unit;}
        NumberWithUnits(double val, string unit) : val(val), unit(unit){}

        static void read_units(ifstream &ifs);

        //Arithmetic operators
        NumberWithUnits operator+();
        NumberWithUnits operator+(const NumberWithUnits &num);
        NumberWithUnits &operator+=(const NumberWithUnits &num);
        NumberWithUnits operator-();
        NumberWithUnits operator-(const NumberWithUnits &num);
        NumberWithUnits &operator-=(const NumberWithUnits &num);
        
        //Multipication operators
        friend NumberWithUnits operator*(const NumberWithUnits &num1, double num2);
        friend NumberWithUnits operator*(double num1, const NumberWithUnits &num2);
        
        //Boolean operators
        friend bool operator<(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend bool operator<=(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend bool operator>(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend bool operator>=(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend bool operator==(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend bool operator!=(const NumberWithUnits &num1, const NumberWithUnits &num2);

        //Increment and Decrement operators
        NumberWithUnits &operator++(); //postfix
        NumberWithUnits &operator++(int); //prefix
        NumberWithUnits &operator--(); //postfix
        NumberWithUnits &operator--(int); //prefix

        //Ostream and Istream operators
        friend ostream& operator << (ostream& out, const NumberWithUnits& t);
        friend istream& operator >> (istream& in, NumberWithUnits& t);
        
    };


}
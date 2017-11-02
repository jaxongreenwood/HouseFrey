//
// Created by Main on 10/26/2017.
//

#ifndef HOUSEFREY_ROMAN_H
#define HOUSEFREY_ROMAN_H
#include <string>
using namespace std;

class Roman
{
private:
    unsigned int value;
    string convertToRoman() const;
    void convertFromRoman(const string&);

public:
    Roman();    //Default constructor
    Roman(const string&);  //The constructor which accepts a string and  converts it internally to an integer.  It actually just forwards it onto convertFromRoman()

    Roman operator+(const Roman &);
   //Roman operator+(Roman, const int) const;
   //void operator +=(const Roman&);  //The left and right operands are Roman objects, but the left operand can change.
   //void operator +=(Roman a, const int r);  //The left operand is a Roman object, the right is an int number.  The left operand can change.
    Roman operator++();  //The prefix ++ operator
    friend bool checkTest(string, int, const Roman&);
    friend void testOutput();
};



#endif //HOUSEFREY_ROMAN_H

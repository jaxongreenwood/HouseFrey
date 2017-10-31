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

    friend bool checkTest(string, int, const Roman&);
    friend void testOutput();
};



#endif //HOUSEFREY_ROMAN_H

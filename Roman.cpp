//
// Created by Main on 10/26/2017.
//
#include <iostream>
#include <string>
#include "Roman.h"

#include <string>
using namespace std;

/*!
 * Default Constructor
 */


//This helps with testing, do not modify.
bool checkTest(string testName, int whatItShouldBe, const Roman& obj )
{
    if (whatItShouldBe == obj.value)
    {
        cout << "Passed " << testName << endl;
        return true;
    }
    else
    {
        cout << "****** Failed test " << testName << " ****** " << endl << "     Object contained: "<< obj.value << endl << "     Output should have contained: " << whatItShouldBe << endl;
        return false;
    }
}


Roman::Roman()
{
    value = 0;

}

Roman::Roman(const string &str)
{
    convertFromRoman(str);

}

/*!
 * takes the string of roman numerals and converts it to numbers
 * @param str
 */

void Roman::convertFromRoman(const string &str)
{
    unsigned int i = 0, total = 0;

    i = str.length();

    for (int j = 0; j < i; j++)
    {

        char c = str.at(j);
        switch (c)
        {
            case 'I':
                total += 1;
                break;

            case 'V':
                total += 5;
                break;

            case 'X':
                total += 10;
                break;

            case 'L':
                total += 50;
                break;

            case 'C':
                total += 100;
                break;

            case 'D':
                total += 500;
                break;

            case 'M':
                total += 1000;
                break;
        }


    }
    value = total;
    cout << "Decimal value: " << total << endl;
}

/*!
 * takes the numbers and converts them into roman numerals
 * @return
 */

string Roman::convertToRoman() const
{
    int temp = value;
    string roman;

    while(temp > 0){
        if(temp > 1000){
            temp - 1000;
            roman.append("M");
        }
        if(temp > 500){
            temp - 500;
            roman.append("D");
        }
        if(temp > 100){
            temp - 100;
            roman.append("C");
        }
        if(temp > 50){
            temp - 50;
            roman.append("L");
        }
        if(temp > 10){
            temp - 10;
            roman.append("X");
        }
        if(temp > 5){
            temp - 5;
            roman.append("V");
        }
        if(temp > 1){
            temp - 1;
            roman.append("I");
        }
    }


    return std::string();
}

Roman Roman::operator+(const Roman &)
{
    Roman t;
    t.value = value + value;
    return t;
}

 Roman Roman::operator+(const int i) {
     Roman t;
     int temp = getValue() + i;
     t.setValue(temp);
     return t;
}

Roman Roman::operator++() {
    Roman t;
    ++value;
    t.value = value;
    return t;
}

/*Roman Roman::operator+(int i, Roman r) {
    Roman t;
    int temp = i + r.getValue();
    t.setValue(temp);
    return t;
}*/

unsigned int Roman::getValue() const {
    return value;
}

void Roman::setValue(unsigned int value) {
    Roman::value = value;
}


Roman Roman::operator+=(const Roman& r) {
    Roman t;
    value += r.getValue();
    return t;
}

void Roman::operator+=(const int r) {
    value += r;
}

/*Roman Roman::operator+(Roman a, const int r) const
{
    Roman t;
    int temp = a.value;
    temp + r;
    t.value = temp;
    t.convertToRoman();
    return Roman(t);
}*/

//This helps with testing, do not modify.
bool checkTest(string testName, string whatItShouldBe, string whatItIs )
{
    if (whatItShouldBe == whatItIs)
    {
        cout << "Passed " << testName << endl;
        return true;
    }
    else
    {
        cout << "****** Failed  test " << testName << " ****** " << endl << " Object contained: "<< whatItIs << endl <<
                 "  Output should have contained: " << whatItShouldBe << endl;
        return false;
    }
}

void testOperatorIncrement()
{
//Test prefix increment
    Roman a("MLII");
    Roman b("DDCCI");
    b = ++a;
    checkTest("testOperatorIncrement #1", 1053, a);
    checkTest("testOperatorIncrement #2", 1053, b);
}

void testConstructor()
{
    //Test to make sure that empty objects are set to zero.
    Roman blank;
    checkTest("testConstructor #1", 0, blank);

    //Test reading in a number.
    Roman a("LXVI");
    checkTest("testConstructor #2", 66, a);

    //Test a bigger number.
    Roman b("MMMDDCCLLXXVVII");
    checkTest("testConstructor #3", 4332, b);
}

void testOperatorPlus()
{
    //Test adding two roman objects
    Roman a("XVI");
    Roman b("MDCLXVI");
    Roman c = a + b;
    checkTest("testOperatorPlus #1", 1682, c);
    //make sure the left and right operands weren't modified
    checkTest("testOperatorPlus #2", 16, a);
    checkTest("testOperatorPlus #3", 1666, b);

    //Test adding an object with an int
    c = a + 52;
    checkTest("testOperatorPlus #4", 68, c);
    //make sure the left operand wasn't modified
    checkTest("testOperatorPlus #5", 16, a);

    //Test adding an int with an object
   /* c = 578 + a;
    checkTest("testOperatorPlus #6", 594, c);
    //make sure the right operand wasn't modified/checkTest("testOperatorPlus #7", 16, a);*/

}

void testOperatorPlusEqual()
{
//Test adding two roman objects
    Roman a("MLII");
    Roman b("DDCCI");
    a += b;
    checkTest("testOperatorPlusEqual #1", 2253, a);
//make sure the right operand wasn't modified
    checkTest("testOperatorPlusEqual #2", 1201, b);
//Test adding on an integer
    b += 17;
    checkTest("testOperatorPlusEqual #3", 1218, b);
}

void testOutput()
{
    Roman a("MDCLXVI");
    string b = a.convertToRoman();
    checkTest("testOutput #1", "MDCLXVI", b);
//This is really the value 7.  Your code should correctly read this
    //in and convert it back to VII.
            Roman c("IIIIIII");
    b = c.convertToRoman();
    checkTest("testOutput #2", "VII", b);
}

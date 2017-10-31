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
void testConstructor()
{
    //Test to make sure that empty objects are set to zero.
    Roman blank;
    checkTest("testConstructor #1", 0, blank);

    //Test reading in a number.
    Roman a("LXVI");
    checkTest("testConstructor #2", 66, a);

    //Test a bigger number.
    //Roman b("MMMDDCCLLXXVVII");
    //checkTest("testConstructor #3", 4332, b);

}


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

void Roman::convertFromRoman(const string &str)
 {

     int i = str.length();
    for (int j = 0; j < i; j++)
    {

        char c = str.at(j);
        switch (c)
        {
            case 'I':
                i += 1;
                break;

            case 'V':
                i += 5;

                break;

            case 'X':
                i += 10;

                break;

            case 'L':
                i += 50;

                break;

            case 'C':
                i += 100;

                break;

            case 'D':
                i += 500;

                break;

            case 'M':

                i += 1000;
                break;


        }


    }
}

string Roman::convertToRoman() const
{
    return std::string();
}

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
        cout << "****** Failed test " << testName << " ****** " << endl << " Object contained: "<< whatItIs << endl <<
                 "  Output should have contained: " << whatItShouldBe << endl;
        return false;
    }
}
#include <iostream>
#include <string>
#include "Roman.h"

using namespace std;


//Function Prototype
void testConstructor();

// Class Definition
int main()
{

    testConstructor();


    return 0;
}
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

#include <iostream> //Do NOT USE, LEGACY, please use main.cc

using namespace std;
//deleted the old version

//This is the working code, or it should be
float division(Number& x, Number& y){ //changed from Normal to Number
    float result = x.get_value()/y.get_value();
    return result;
}

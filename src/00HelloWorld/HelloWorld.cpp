#include <iostream>
#include "HelloWorld.h"

using namespace std;

void say(const std::string& message)
{
    cout << message.c_str() << endl;
}
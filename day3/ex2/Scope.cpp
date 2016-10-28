#include <iostream>
#include <chrono>
#include <ctime>

#include "ScopeDurationBasic.cpp"
//#include "stringCreator.cpp"
using namespace std;
using namespace chrono;

string s("Hello");
string t("test");

long fibonacci(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
 
void stringtestplus()
{
    ScopedDurationLogger logger(1);
    s = s + t;
}


void stringtestadd()
{
    ScopedDurationLogger logger(2);
    s += t;
}


void stringtestall()
{
    ScopedDurationLogger logger(3);
    fibonacci(3);
    string s = string("Hello") + string("test");
}

int main()
{

    ScopedDurationLogger logger3(4);
    cout << "f(3) = " << fibonacci(3) << '\n';
    stringtestplus();
    stringtestadd();
    stringtestall();
}


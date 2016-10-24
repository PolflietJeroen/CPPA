//#include <stdlib.h>
//#include <stdio.h>
#include <iostream>
#include <string>
//#include <functional>
#include <algorithm>
#include <vector>

using namespace std;
class EndsNotWith
{
public:
    
    EndsNotWith(const std::string& s) : _expected(s) {}

    inline bool operator()(const std::string& s) { 
        if (_expected.length() <= s.length()) 
        {
            return (s.compare(s.length() - _expected.length(), _expected.length(), _expected));
        }
        else 
        {
            return false;
        }
    }

private:
    const std::string _expected;

};


class EndsWith
{
public:
    
    EndsWith(const std::string& s) : _expected(s) {}

    inline bool operator()(const std::string& s) { 
        if (_expected.length() <= s.length()) 
        {
            return (0==s.compare(s.length() - _expected.length(), _expected.length(), _expected));
        }
        else 
        {
            return false;
        }
    }

private:
    const std::string _expected;

};

int main()//int argc, char** argv)
{
    vector<string> strings { "boo", "foo", "zoo", "zo", "bar" ,"fubar" };
    for (auto i = strings.begin(); i != strings.end(); ++i)
        std::cout << *i << ' ';
    cout << '\n';
    strings.erase(remove_if(begin(strings), end(strings), EndsWith("oo")), end(strings));
    for (auto i = strings.begin(); i != strings.end(); ++i)
            std::cout << *i << ' ';
    cout << '\n';
    vector<string> strings1 { "boo", "foo", "zoo", "zo", "bar" ,"fubar" };
    for (auto i = strings1.begin(); i != strings1.end(); ++i)
        std::cout << *i << ' ';
    cout << '\n';
    strings1.erase(remove_if(begin(strings1), end(strings1), EndsNotWith("oo")), end(strings1));
    for (auto i = strings1.begin(); i != strings1.end(); ++i)
            std::cout << *i << ' ';
    cout << '\n';
} 

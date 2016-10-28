
#include <string>
#include <iostream>
#include <boost>

using namespace std;
using namespace std::string;

void operatorPlus(string original)
{
    string s;
    for(int i=0; i<NUMLOOPS; ++i)
        s = s + original;
}


void operatorPlusEquals(string original)
{
    string s;
    for(int i=0; i<NUMLOOPS; ++i)
        s += original;
} 

void boostJoin(string original)
{
    using boost::algorithm::join;
    using std::vector;
    vector<string> strings; // No preallocation
    for(int i=0; i<NUMLOOPS; ++i)
        strings.push_back(original);
    auto s = join(strings, "");
}


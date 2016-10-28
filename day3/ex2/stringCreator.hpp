#include <string>
using namespace std;
using namespace string;

void operatorPlus()
{
    string s;
    for(int i=0; i<NUMLOOPS; ++i)
        s = s + original;
}


void operatorPlusEquals()
{
    string s;
    for(int i=0; i<NUMLOOPS; ++i)
        s += original;
} 

void boostJoin()
{
    using boost::algorithm::join;
    using std::vector;
    vector<string> strings; // No preallocation
    for(int i=0; i<NUMLOOPS; ++i)
        strings.push_back(original);
    auto s = join(strings, "");
}


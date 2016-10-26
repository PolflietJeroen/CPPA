
#include <iostream>
#include "SearchableStack.hpp"

using namespace std;
int main()
{
    SearchableStack<int> ss;
    ss.push(42);
    ss.push(88);
    cout << ss.top() << '\n';
    ss.pop();
    cout << ss.top() << '\n';

    SearchableStack<int> s;
    s = ss;
   
    cout << s.top() << '\n';
    cout << "Done!" << endl;
}

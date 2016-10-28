#include <iostream>
#include <chrono>
#include <ctime>

#include "ScopeDurationBasic.cpp"

using namespace std;
using namespace chrono;

long fibonacci(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
 
int main()
{

    ScopedDurationLogger logger(1);
    time_point<system_clock> start, end;
    start = system_clock::now();
    cout << "f(3) = " << fibonacci(3) << '\n';
    end = system_clock::now();
    
    duration<double> elapsed_seconds = end-start;
    time_t end_time = system_clock::to_time_t(end);

    cout << "finished computation at " << ctime(&end_time) << "elapsed time: "
        << elapsed_seconds.count() << "s\n";
}


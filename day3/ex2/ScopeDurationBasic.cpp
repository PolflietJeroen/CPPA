#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;

struct ScopedDurationLogger
{
        time_point<high_resolution_clock> start;
        int id;
        
        ScopedDurationLogger(int i) :
            start(high_resolution_clock::now()),
            id(i)
            {}
        
        
        ~ScopedDurationLogger() {
            auto end = high_resolution_clock::now();
            duration<double> dur = end - start;
            auto durns = duration_cast<nanoseconds>(dur);
            cout << "It took " << durns.count() << " nanoseconds in " << id << endl;
        }
};
/*
int _main()
{

    ScopedDurationLogger logger(1);
    time_point<system_clock> start, end;
    start = system_clock::now();
    end = system_clock::now();
    
    duration<double> elapsed_seconds = end-start;
    time_t end_time = system_clock::to_time_t(end);

    cout << "finished computation at " << ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";
}
*/

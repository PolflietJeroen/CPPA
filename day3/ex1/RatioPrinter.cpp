#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;

int main()
{

    time_point<system_clock> start, end;
    start = system_clock::now();
    end = system_clock::now();
    
    duration<double> elapsed_seconds = end-start;
    time_t end_time = system_clock::to_time_t(end);

    cout << "finished computation at " << ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";

    cout << (double) high_resolution_clock::period::num << '\n';
    cout << (double) steady_clock::period::num << '\n';
    cout << (double) system_clock::period::num << '\n';


    cout << (double) high_resolution_clock::period::den << '\n';
    cout << (double) steady_clock::period::den << '\n';
    cout << (double) system_clock::period::den << '\n';


    cout << (double) high_resolution_clock::period::num / high_resolution_clock::period::den << '\n';
    cout << (double) steady_clock::period::num / steady_clock::period::den << '\n';
    cout << (double) system_clock::period::num / system_clock::period::den << '\n';

}


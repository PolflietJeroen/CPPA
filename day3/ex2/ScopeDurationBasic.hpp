#ifndef ScopedDurationBasic_HPP
#define ScopedDurationBasic_HPP
 
#include <chrono>
#include <string>
#include <map>
#include <vector>

struct ScopedDurationLoggerData
{
    static std::map<std::string,
        std::vector<double>> recordedDurations;
    
    void operator()(double seconds, const std::string& tag){
        
        recordedDurations[tag].push_back(seconds);
    }
};
#endif

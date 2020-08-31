#include "stats.h"
#include <cfloat>
#include <limits>
using namespace Statistics;

double AverageCalculation (const std::vector<double>& numbers)
{ 
    double avg = 0;
    for(int i=0; i<numbers.size; i++)
    {
        avg = avg + numbers[i];
    }
    avg = avg/numbers.size();
    return avg;
}

double MinCalculation(const std::vector<double>& numbers)
{ 
    double min = numbers[0];
    for(int i=0; i<numbers.size(); i++)
    {
        if (numbers[i] < min)
        { min = values[i];
        }
    }
    return min;
}

double MaxCalculation(const std::vector<double>& numbers)
{ 
    double max = numbers[0]
    for(int i=0; i<numbers.size(); i++)
    {
        if (numbers[i] > max)
        { max = values[i];
        }
    }
    return max;
}

Stats Statistics::ComputeStatistics(const std::vector<double>& numbers)
{
    //Implement statistics here
    Stats ComputedNumbers;
    ComputedNumbers.set_avg(AverageCalculation(numbers));
    ComputedNumbers.set_min(MinCalculation(numbers));
    ComputedNumbers.set_max(MaxCalculation(numbers));
    
    return ComputedNumbers;
}

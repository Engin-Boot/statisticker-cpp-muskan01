#include "stats.h"
#include <cfloat>
#include <limits>
using namespace Statistics;

double AverageCalculation (const std::vector<double>& numbers)
{ 
    double avg = 0;
    int n = numbers.size();
    for(int i=0; i<n; i++)
    {
        avg = avg + numbers[i];
    }
    avg = avg/numbers.size();
    return avg;
}

double MinCalculation(const std::vector<double>& numbers)
{ 
    double min = numbers[0];
    int n = numbers.size();
    for(int i=0; i<n; i++)
    {
        if (numbers[i] < min)
        { min = numbers[i];
        }
    }
    return min;
}

double MaxCalculation(const std::vector<double>& numbers)
{ 
    double max = numbers[0];
     int n = numbers.size();
    for(int i=0; i<n; i++)
    {
        if (numbers[i] > max)
        { max = numbers[i];
        }
    }
    return max;
}

stats Statistics::ComputeStatistics(const std::vector<double>& numbers)
{
    //Implement statistics here
    stats ComputedNumbers;
     int n = numbers.size();
        if (n == 0)
    {   ComputedNumbers.average = std::numeric_limits<double>::quiet_NaN();
        ComputedNumbers.min = std::numeric_limits<double>::quiet_NaN();
        ComputedNumbers.max = std::numeric_limits<double>::quiet_NaN();
    }    
    else
    {    ComputedNumbers.average = AverageCalculation(numbers);
         ComputedNumbers.min = MinCalculation(numbers);
         ComputedNumbers.max = MaxCalculation(numbers);
    }
    return ComputedNumbers;
}

#include <vector>

namespace Statistics {
    class stats
    {
        public :
        double average;
        double min;
        double max;
            
    };
    
    stats ComputeStatistics(const std::vector<double>& );
}

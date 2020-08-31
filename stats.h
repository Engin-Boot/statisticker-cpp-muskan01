#include <vector>

namespace Statistics {
    class stats
    {
        public :
        double average;
        double min;
        double max;
        stats()
       { average = 0;
          min = 0;
          max = 0;
       }
    };
    
    stats ComputeStatistics(const std::vector<double>& );
}

#include <vector>

namespace Statistics {
    class stats
    {
        double average;
        double min;
        double max;
        public :
        void set_avg(double avg)
        {
            this->average = avg;
        }
        void set_min (double min)
        {
            this->min = min;
        }
        void set_max(double max)
        {
            this->max = max;
        }
    };
    
    stats ComputeStatistics(const std::vector<double>& );
}

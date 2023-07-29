#include <vector>
#include <cmath>

// Mean function to calculate the average of elements in the vector
double mean(const std::vector<double>& data) {
    if (data.empty()) {
        return 0.0; 
    }

    double sum = 0.0;
    for (const double& value : data) {
        sum += value;
    }

    return sum / data.size();
}


// Standard deviation function to calculate the standard deviation of elements in the vector
double stddev(const std::vector<double>& data) {
    if (data.empty()) {
        return 0.0; 
    }

    double meanValue = mean(data);
    double sumSquaredDiffs = 0.0;

    for (const double& value : data) {
        double diff = value - meanValue;
        sumSquaredDiffs += diff * diff;
    }

    double variance = sumSquaredDiffs / data.size();
    return std::sqrt(variance);
}
int main() {

    /*
    Test
    
    
    
    
    
    */ 

        


    return 0;
}

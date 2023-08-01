#ifndef DataReader_h
#define DataReader_h

#include <vector>
#include <string>

class DataReader{
    public:
        DataReader();
        std::vector<double> readData(std::string filename);
}


#endif

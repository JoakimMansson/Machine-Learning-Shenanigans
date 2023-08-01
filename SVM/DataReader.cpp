#include DataReader.h


DataReader::DataReader(){
    // Constructor
}

std::vector<double> DataReader::ReadData(std::string filename){
    // Read data from file
    std::ifstream file(filename);
    std::string line;
    std::vector<double> row;
    while (std::getline(file, line)) {
        std::isstringstream iss(line);
        std::string value;
        while (std::getline(iss, value, ",")) {
            row.push_back(std::stod(value));
        }
    }

    return row;
}
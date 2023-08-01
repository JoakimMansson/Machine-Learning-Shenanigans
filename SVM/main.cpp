#include "DataReader.h"


int main(){
    DataReader reader;
    std::vector<double> data = reader.readData("SVM/heart+disease/bak");
    for (int i = 0; i < data.size(); i++){
        std::cout << data[i] << std::endl;
    }

    return 0;
}
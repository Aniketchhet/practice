#include <iostream>
#include<fstream>
int main(){
    std::ifstream inputfile("data.txt");
    if(!inputfile.is_open()){
        std::cerr<<"Error opening file"<<std::endl;
        return 1;
    }
    std::string line;
    while(std::getline(inputfile,line)){
        std::cout<<line<<std::endl;
    }
    inputfile.close();
    return 0;
}
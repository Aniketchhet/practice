#include<iostream>
#include<fstream>
int main(){
    std::ofstream outputfile("output.txt");
    if(!outputfile.is_open()){
        std::cerr<<"Error opening file"<<std::endl;
        return 1;
    }
    outputfile<<"Hello, World!"<<std::endl;
    outputfile<<"This is a file writing example."<<std::endl;
    outputfile.close();
    return 0;
}
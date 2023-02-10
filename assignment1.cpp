// COSC 3360/6310 - Fundamentals of Operating Systems 
// Jehan-François Pâris 

/* 
Program simulates execution of a stream of interactive processes by a time-shared system 
with NCORES processing cores. 

Created by Gleici Pereira on 02/06/2023
*/

// Does ouput need to be redirected to a txt file as well?



#include <iostream>
#include <string>
#include <vector>
#include <queue>


int coreTime;       // Updated every time program moves to another scheduling action

int main(){

    std::string inputFile;

    std::getline(std::cin, inputFile, static_cast<char>(EOF));
    //ncores = atoi(inputFile.c_str());     //convert string to int
    std::cout << inputFile << std::endl;
    

    return 0;

}
//main.cpp
//create a program to read file input and output

#include <fstream>
#include <sstream>
#include <string>
//#include <iostream>
#include <cstdlib>


int main(){
  //define all needed variables
  std::ifstream inFile;
  std::ofstream outFile;
  std::string currentLine;
  std::stringstream ss;
  int total;
  int countLine;
  std::string numbers;
  std::string words;
 
  //open the input file
  inFile.open("input.txt");
  while(getline(inFile, currentLine)){

    //add one to the countLine
    countLine++;

    //clear the stringstream
    ss.clear();
    ss.str("");

    //place the current line in the string stream
    ss.str(currentLine);
  
    //find if the currentLine starts with a string or with a number, then decide which route to follow
    //one route is calculating the total and the other is printing the word based on the total value
 
    //if the current line is an even number
    if(countLine % 2 == 0){
      
      //get the word and ready a variable to hold it
      std::string sequence;
      getline(ss, words);

      int i;
      for(i = 0; i < total; i++){
      
        sequence += words;
        sequence += ",";
  
      }//end for
      
      //append the sequence into the output file
      outFile.open("output.txt", std::ios::app);
      outFile << sequence << std::endl;
      outFile.close();
 
      //clean the total
      total = 0;

    }
    else{
  
      //pick the numbers out of the current line and add them to the total
      while(getline(ss, numbers, ',')){
      
        total += atoi(numbers.c_str());

      }//end nested while

    }//end if

  }//end while

  //close the inFile
  inFile.close();

}//end main


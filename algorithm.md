Jorge Jimenez

Andrew Harris

CSCI24000

2/8/2022

Project: Parsing and File I/O

Goal: To input a set of three intengerst and a string into an "input.txt" file, then read the "input.txt" file to add up all three numbers. Based on the number calculated, the string will be outputed an equal amount of times to an "output.txt" file in the same directory. The program should do this a total of 5 times.

Input: The user is not expected to input anything into the program. Rather, the program will input the numbers and strings to the "input.txt" file so that there will be no user errors.

Output: The "output.txt" file should be appended with new lines of the "input.txt" strings repeated a certain number of times based on the numbers in the "input.txt" file, these repeating strings will all be sepeated by a comma.

Steps:

  "input.txt" file:
  
    I will fill the "input.txt" file with a line of 3 numbers, seperated by commas with no trailing comma, and then a word. This will be done a total of 5 times, for five sets of three numbers with 5 words in-between.


  main.cpp:

    Imports: to accomplish this project, the fstream and sstream libaries will be required. The c-standard-libary will also be needed to be able to use atoi() and .c_str().
    
    First, the main function will need to define all needed variables. The program will need to create an inFile and outFile variables. Then a variable "currentLine" will be needed to hold the contents of the a single line from the "input.txt" file. A stringstream 
    variable will be needed to hold the "currentLine" contents in as a string data type. Two integer variables will be needed, one to hold the "total" of the three numbers, and one to hold the "lineCount" to decide which line number of the 'input.txt' file the program
    is reading. Finally, there will be a need for two string variables: one will hold the "numbers" while they are still in text form, and the other will hold the "word" that comes after the numbers in the "input.txt" file.

    After all needed variables are defined, the inFile variable will open the "input.txt" file. While the "input.txt" file remains open, a while loop will use the "getline" function to obtain the current line of the "input.txt" file, beginning with the first line. After
    the first line is taken into the program, "currentLine" will increase by one, in fact it will increase by one each time the while loop runs, to state that current line is the first, or second, or 8th line of the "input.txt" file. Then the stringstream is cleared, as
    the values it will hold will change between numbers and words. Before anything can be done to the current line, regarding if it is numbers or a word, the stringstream will need to convert the current line into a string data type.

    To decide if the current line is holding numbers or a word, we use the "lineCount" integer. If the integer is odd, then the "currentLine" in the stringstream are the numbers. If the integer is even, then the stringstream should be holding a word, if the "input.txt"
    file was written correctly. 

      When the number is even, determined by using the modulus operator: then a new string is created that will hold the "expected output". Then using a "getline" on the stringstream, the value of the string stream can be placed in the "word" variable. Then a for loop
      can add the word to the string holding the "expected output", along side a comma for word seperation. The for loop will finish when the counting variable is equal to the "total" sum of the numbers from the previous, odd, line. Then the outFile is open, and the 
      "expected output" is appended to the outFile and the outFile will be closed. The last thing that needs to be done is to set the total sum of the numbers to zero, so that the current sum will not be added with the next set of numbers.
      
      When the number is odd, starting with the first line of the "input.txt" file, then a while loop will use a "getline", which returns a boolean value, to place the stringstream value, which should be three numbers seperated by commas, into the "numbers" variable 
      while breaking at each comma using a dilimeter. Using the atoi() function and the .c_str() method on the "numbers" variable, while in the while loop, will turn the text number into an integer value. Which then can be added to the "total" sum variable so that 
      value can be used for the next line, an even line, to create the "expected output"
      
    To end the program, close inFile to wrap up all lose ends.

    

   

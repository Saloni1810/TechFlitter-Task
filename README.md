**String Manipulation Program :**

This program performs a variety of string manipulation tasks in C++. The operations include converting a string to uppercase, converting it to lowercase, reversing the string, and counting the number of vowels and consonants in the input string.

**Features:**

Convert a string to uppercase.    
Convert a string to lowercase.    
Reverse the string.    
Count the vowels in the string.   
Count the consonants in the string.  

**Code Overview:**

The program contains the following functions:

1. toUpperCase(string str): Converts and returns the input string in uppercase.
2. toLowerCase(string str): Converts and returns the input string in lowercase.  
3. reverseString(string str): Reverses and returns the input string.         
4. isVowel(char ch): Helper function that returns true if the character is a vowel (a, e, i, o, u), false otherwise.        
5. countVowels(string str): Returns the count of vowels in the input string.       
6. countConsonants(string str): Returns the count of consonants in the input string.           

**Main Function:**

The program prompts the user for a string input and displays the results of the following operations:

Uppercase version of the string       
Lowercase version of the string       
Reversed string     
Count of vowels in the string     
Count of consonants in the string     

**Example Input/Output:**

Enter string : Hello World   
Converting to UPPERCASE: HELLO WORLD    
Converting to lowercase: hello world    
Reverse string:  dlroW olleH    
No. of vowels in the string: 3   
No. of consonants in the string: 7     

**Compilation and Execution:**

Requirements : 
A C++ compiler, such as g++, should be installed on your system.

**Compilation:**

To compile the program, open a terminal and run the following command:
g++ taskAssignment.cpp -o taskAssignment
Execution
After compiling, you can run the program by executing the following command:

./taskAssignment


**Input Format:**

The program accepts a single line of string input from the user.


**Edge Cases Handled:**

Handles strings with mixed case letters.   
Handles strings with special characters (non-alphabetic characters).    
Handles empty strings and strings consisting only of spaces.    
Handles strings containing digits or punctuation marks.    

**License:**

This project is licensed under the MIT License. Feel free to modify and distribute the code as per your requirements.

#include <algorithm> 
#include <cctype>  
#include <iostream> 
#include <string> 
using namespace std; 

//Function to convert string to uppercase
string toUpperCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}

//Function to convert string into lowercase
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

//Function to reverse the string
string reverseString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

//Function to check if char is a vowel 
bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

//Function to count vowels in a string
int countVowels(string str) { 
	int vowels = 0; 
	for (int i=0; i<str.length(); i++) 
		if (isVowel(str[i])) 
			++vowels; 
	return vowels; 
} 

// Function to count consonants in the string
int countConsonants(string str){
    int consonants = 0;
    for (int i=0; i<str.length(); i++)
        if (isalpha(str[i]) && !isVowel(str[i])) 
            ++consonants;
    return consonants;
}

int main(){ 
    string str;
    cout << "Enter string : ";
	getline(cin, str);

    cout << "Converting to UPPERCASE: " << toUpperCase(str) << endl;
    cout << "Converting to lowercase: " << toLowerCase(str) << endl;
    cout << "Reverse string:  " << reverseString(str) << endl;
    cout << "No. of vowels in the string: " << countVowels(str) << endl;
    cout << "No. of consonants in the string: " << countConsonants(str) << endl;
}
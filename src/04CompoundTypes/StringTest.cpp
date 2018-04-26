#include <iostream>
#include "StringTest.h"

using namespace std;

void cstringTest()
{
    // // string as array: always end with '\0' - null
    // char notAString[10] = {'A', 'N', 'H'};
    // char str[] = {'A', 'N', 'H', '\0'};
    // cout << str << ": " << sizeof(str) / sizeof(char) << endl;
    // // char str2[2] = {'A', 'N', 'H', '\0'}; // Compile error: error C2078: too many initializers
    // char str2[10] = {'A', 'N', 'H', '\0'};
    // cout << str2 << ": " << sizeof(str2) / sizeof(char) << endl;

    // // issuse: input a string with length > allocated length
    // char shortString[5];
    // cout << "Enter a string with length > 5:" << endl;
    // cin >> shortString;
    // cout << "You entered: " << shortString << endl;
    // cout << "Length of your string: " << sizeof(shortString) / sizeof(char) << endl; // crashed here if you enter a string with length > 5

    // // cstring input: cin >> str;
    // // -> stop reading when it reads a whitespace, tab or newline character.
    // // -> the string entered after whitespaces or tabs will be left in input queue (not includes whitespaces and tabs)
    // char fullName[40];
    // char country[40];
    // cout << "Enter your full name with space:" << endl;
    // cin >> fullName; // Enter "Phuc Anh"
    // cout << "Your full name is: " << fullName << endl; // Print "Phuc" -> cin uses whitespaces, tabs, newline to delineate a string -> Read whitespace, add null, return {'P','h','u','c','\0'}
    // cout << "Enter your country: " << endl;
    // cin >> country; // Skip that statement -> After reading "Phuc" for fullName, cin leaves "Anh" in the input queue -> when this statement is called, cin search the input queue for response -> it found "Anh" still there -> cin returns "Anh" 
    // cout << "Your country is: " << country << endl; // Print "Anh"

    // // cstring input: cin.getline(str, size);
    // // -> read until it reachs the "size" limit or when it reads a new line character
    // // -> the newline character entered will be discard (not leave it in input queue)
    // // -> WARNING: only newline character will be discard, if you enter a string with length > size (parameter of cin.getline), the remain string will be left in input queue
    // char numberString[5];
    // char street[40];
    // cout << "Enter 123456789:" << endl;
    // cin.getline(numberString, 5); // If you enter "123" (length < 5) here, you can enter street after that. But if you enter "123456" (length >= 5), cin.getline(street, 40) will be skip because "56" is left in input queue
    // cout << "You enterd: " << numberString << endl;
    // cout << "Enter a street name:" << endl;
    // cin.getline(street, 40);
    // cout << "You enterd: " << street << endl;

    // // cstring input: cin.get(str, size);
    // // -> read until it reachs the "size" limit or when it reads a new line character
    // // -> the newline character entered will be left in the input queue
    // char pet[40];
    // char food[40];
    // cout << "Enter your pet name:" << endl;
    // cin.get(pet, 40);
    // cout << "You enterd: " << pet << endl;
    // cout << "Enter your favorite food: " << endl;
    // cin.get(food, 40);
    // cout << "You enterd: " << food << endl;
    // if (food[0] == '\0')
    // {
    //     cout << "The newline character is left in input queue. "<< endl;
    //     cout << "Therefore, when \"cin.get(food, 40)\" is called, it will read the new line character and stop reading" << endl;
    //     cout << "-> food is empty string with food[0] == '\\0'" << endl;
    //     cout << "To avoid this issue, add \"cin.get()\" or \"cin.get(c)\" (char c) statement between them - it reads a single character even if it is a newline";
    // }

    // // fix issue newline character with cin.get()
    // char computer[40];
    // char movie[40];
    // cout << "Enter your computer name:" << endl;
    // cin.get(computer, 40);
    // cout << "You enterd: " << computer << endl;
    // cin.get();
    // cout << "Enter your favorite movie: " << endl;
    // cin.get(movie, 40);
    // cout << "You enterd: " << movie << endl;

    // // issuse: input an empty line
    // char aString[10];
    // cout << "Press Enter!" << endl;
    // cin.get(aString, 10);
    // if (aString[0] == '\0')
    // {
    //     cout << "Output is an empty string" << endl;
    // }
    // else
    // {
    //     cout << "Output: " << aString << endl;
    // }

    // // NOTE: cin.getline(str, size) vs cin.get(str, size)
    // // If you use cin.get(str, size) to read a line, you can check if it read the whole line or just stopped because the length of the line (input) > size by reading the next character and check if it is a newline or not
    // // You can't do it with cin.getline() because it discards the newline character after reading.
}

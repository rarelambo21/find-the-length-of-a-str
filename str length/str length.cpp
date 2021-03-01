// str length.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::string::iterator it;

    str = "Hello World";

    int count = 0;

    for (it = str.begin(); it != str.end(); it++)
    {
        std::cout << *it;
        count++;
    }

    std::cout << "\n";
    std::cout << count << std::endl;

    return 0;
}



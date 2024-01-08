#include <iostream>
#include <string>

int main()
{
    // printing data
    std::cout << "Hello C++20" << std::endl;

    int age{21};
    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error message : something is wrong" << std::endl;
    std::clog << "Log message : something happened" << std::endl;

    int age1;
    std::string name;

    std::cout << "Please type your name and age : " << std::endl;

    // // you can take input like so
    // std::cin >> name;
    // std::cin >> age1;

    // // You can also add data like so in one line:
    // std::cin >> name >> age1;

    // Finally, for multi line things, you can use getline

    std::getline(std::cin, name);

    std::cin >> age1;

    std::cout << "Hello " << name << " , you are " << age1 << " years old" << std::endl;

    return 0;
}
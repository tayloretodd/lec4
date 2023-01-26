#include <iostream>
#include <string>
#include <vector>
#include "functions_to_implement.cpp"   // when including a .cpp file rather than a .h file, do not include both files during compilation
                                        // in PE, will include a .h 

int main() {
    // run functions implemented in functions_to_implement.cpp

    // test Join() function
    // std::string Join(std::vector<std::string> pieces, std::string glue);
    std::string join_string;
    std::string glue = ", ";
    std::vector<std::string> pieces = {"Apples", "Bananas", "Oranges", "Kiwi"};
    join_string = Join(pieces, glue);

    std::cout << "Result from Join() function: " << join_string << std::endl;

    // test RemoveTwos() function
    // int RemoveTwos(int original);
    int original = 16;
    int result = RemoveTwos(16);
    std::cout << "Result from RemoveTwos(16): " << result << std::endl;

    original = 7;
    result = RemoveTwos(7);
    std::cout << "Result from RemoveTwos(7): " << result <<std::endl;

    


}
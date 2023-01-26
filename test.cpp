#define CATCH_CONFIG_MAIN   // tells 
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Join strings using glue", "[join]") {

    std::vector<std::string> pieces = {"Apples", "Bananas", "Oranges", "Kiwi"};
    std::string glue = ", ";

    REQUIRE(Join(pieces, glue) == "Apples, Bananas, Oranges, Kiwi, ");
}

TEST_CASE ("Remove all twos from input", "[removeTwos]") {

    REQUIRE(RemoveTwos(16) == 1);
    REQUIRE(RemoveTwos(7) == 7);
    REQUIRE(RemoveTwos(26) == 13);
    REQUIRE(RemoveTwos(100) == 25);

}

TEST_CASE ("create vector with m multiples of n", "[multiples]") {
    
    SECTION("Check four multiples of 5"){
        std::vector<int> multiples5 = Multiples(5,4);

        REQUIRE(multiples5[2] == 15);
    }

    SECTION("Check 6 multiples of 10") {
        std::vector<int> multiples10 = Multiples(10, 6);

        REQUIRE(multiples10[5] == 60);
    }
    
    
    SECTION("Check ten multiples of one") {
        std::vector<int> multiples1 = Multiples(1, 10);

        REQUIRE(multiples1[7] == 8);
    }

}
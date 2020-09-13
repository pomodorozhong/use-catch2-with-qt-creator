#include <fizzbuzz.h>

#include "catch.hpp"

TEST_CASE("FizzBuzz::GetOutputText()")
{
    REQUIRE(FizzBuzz::GetOutputText(3) == "Fizz");
    REQUIRE(FizzBuzz::GetOutputText(5) == "Buzz");
    REQUIRE(FizzBuzz::GetOutputText(7) == "7");
    REQUIRE(FizzBuzz::GetOutputText(15) == "FizzBuzz");
}

#define CATCH_CONFIG_RUNNER
#define CATCH_CONFIG_FAST_COMPILE
#include "catch.hpp"

int main(int argc, char* argv[])
{
    // global setup...

    int result = Catch::Session().run(argc, argv);

    // global clean-up...

    return result;
}

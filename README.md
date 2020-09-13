# use Catch2 with Qt Creator

+ `project/app/app.pro` is for main app
+ `project/modules/fizzbuzz/test/fizzbuzz_test.pro` is for the test

## Hints

+ The `catch.hpp` can be place outside of a project, and be shared with mutiple projects.
+ If the compilation time is too long, it's probably compiled in debug mode. Switch to release mode to speed up.

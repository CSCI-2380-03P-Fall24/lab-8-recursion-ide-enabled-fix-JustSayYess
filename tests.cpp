// test file - do not modify
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <ctime>
#include <iostream>
using namespace std;

#include "recursionLab.h" 

TEST_CASE("lineOfStars") {
    CHECK_NOTHROW(lineOfStars(1));
    CHECK(lineOfStars(5) == "*****");
    CHECK(lineOfStars(8) == "********");
    CHECK(lineOfStars(0) == "");
    CHECK_NOTHROW(lineOfStars(-1));
}

TEST_CASE("power") {
    CHECK(power(1, 3) == 1.f);
    CHECK(power(3,3) == 27.f);
    CHECK(power(3.14, 4) == (3.14f*3.14f*3.14f*3.14f));
    CHECK(power(-1, 0) == 1.f); 
}

TEST_CASE("stars") {
    CHECK_NOTHROW(stars(5));
    CHECK_NOTHROW(stars(0));
    CHECK_NOTHROW(stars(-1));
}

TEST_CASE("isPalindromeR") {
    CHECK(isPalindromeR("banana") == false);
    CHECK(isPalindromeR("") == true);
    CHECK(isPalindromeR("o") == true);
    CHECK(isPalindromeR("tacocat") == true);
    CHECK(isPalindromeR("recursion") == false);
}

TEST_CASE("reverse") {
    CHECK(reverse("banana") == "ananab");
    CHECK(reverse("tacocat") == "tacocat");
    CHECK(reverse("universe") == "esrevinu");

    CHECK_NOTHROW(reverse(""));
    CHECK(reverse("") == "");
}

TEST_CASE("sumDigits") {
    CHECK_NOTHROW(sumDigits(0));
    CHECK(sumDigits(0) == 0);
    CHECK(sumDigits(7) == 7);
    CHECK(sumDigits(12345) == 15);
    CHECK(sumDigits(-4096) == 19);
}

TEST_CASE("countOccurrences") {
    // empty array case (pass n=0 with a dummy buffer)
    int dummy[1] = {0};
    CHECK_NOTHROW(countOccurrences(dummy, 0, 5));
    CHECK(countOccurrences(dummy, 0, 5) == 0);

    int a1[] = {2, 3, 5};
    CHECK(countOccurrences(a1, 3, 2) == 1);
    CHECK(countOccurrences(a1, 3, 5) == 1);
    CHECK(countOccurrences(a1, 3, 7) == 0);

    int a2[] = {1, 1, 1};
    CHECK(countOccurrences(a2, 3, 1) == 3);
    CHECK(countOccurrences(a2, 3, 2) == 0);

    int a3[] = {0, -1, 2, -1, -1, 4};
    CHECK(countOccurrences(a3, 6, -1) == 3);
    CHECK(countOccurrences(a3, 6, 0) == 1);
    CHECK(countOccurrences(a3, 6, 4) == 1);
}

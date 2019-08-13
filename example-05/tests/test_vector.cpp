#include "catch.hpp"

#include <vector>

// For each SECTION the TEST_CASE is executed from the start guaranteeing a clean slate!

TEST_CASE("vectors can be sized and resized", "[vector]") {

  std::vector<int> v(5);

  REQUIRE(v.size() == 5);
  REQUIRE(v.capacity() >= 5);

  SECTION("resizing bigger changes size and capacity") {
    v.resize(10);

    REQUIRE(v.size() == 10);
    REQUIRE(v.capacity() >= 10);
  }

  SECTION("resizing smaller changes size but not capacity") {
    v.resize(0);

    REQUIRE(v.size() == 0);
    REQUIRE(v.capacity() >= 5);
  }

  // SECTIONs can be nested!
  SECTION("reserving bigger changes capacity but not size") {
    v.reserve(10);

    REQUIRE(v.size() == 5);
    REQUIRE(v.capacity() >= 10);

    SECTION("reserving smaller again does not change capacity") {
      v.reserve(7);

      REQUIRE(v.capacity() >= 10);
    }
  }

  SECTION("reserving smaller does not change size or capacity") {
    v.reserve(0);

    REQUIRE(v.size() == 5);
    REQUIRE(v.capacity() >= 5);
  }
}

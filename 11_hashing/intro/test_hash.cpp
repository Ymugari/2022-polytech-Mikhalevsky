#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "hash.h"

#include <doctest.h>

TEST_CASE("whatever") 
{
  CHECK_EQ(hash("hello"), 763074757);
  CHECK_EQ(hash("world"), 1125591660);
  CHECK_EQ(hash("love"), 811145191);
}

#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

TEST_CASE("test_vec2", "[Vec2]") {
  Vec2 a ; // requires that 0.0f == a.x and 0.0f == a.y
  REQUIRE(0.0f == a.x);
  REQUIRE(0.0f == a.y);
  Vec2 b {5.1f, -9.3f }; /* requires that 5.1f == approx(a.y) and -9.3f ==approx(b.y) */
  //copy pasting from task sheet here, I know the line above is bs
  REQUIRE(5.1f == Approx(b.x));
  REQUIRE(-9.3f == Approx(b.y));

}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

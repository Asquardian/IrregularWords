#include "../src/functions.h"
#include <cstring>
#include <gtest/gtest.h>

using namespace std;

TEST(WordsTest, MinTest) { EXPECT_EQ(Words(3), "Be"); }
TEST(WordsTest, MaxTest) { EXPECT_EQ(Words(353), "Written"); }
TEST(WordsTest, OutRangeTest) { EXPECT_EQ(Words(354), ""); }
TEST(Save, Success) {
  EXPECT_EQ(Save("Name"), "SaveSuccess");
}
TEST(ModeTest, Mintest) { EXPECT_EQ(All(0), 0); }
TEST(ModeTest, OutRange) {
  EXPECT_EQ(All(354), 0); // 353 -number of words
}

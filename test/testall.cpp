#include "../src/functions.h"
#include <cstring>
#include <gtest/gtest.h>

using namespace std;

TEST(WordsTest, MinTest) { EXPECT_EQ(Words(3), "Be"); }
TEST(WordsTest, MaxTest) { EXPECT_EQ(Words(353), "Written"); }
TEST(WordsTest, OutRangeTest) { EXPECT_EQ(Words(354), ""); }
TEST(Save, Success) {
  EXPECT_EQ(Save(1, "Name"), "SaveSuccess");
  EXPECT_EQ(Save(1, "Name"), "SaveSuccess");
}
TEST(Save, Error) { EXPECT_EQ(Save(0, "Name"), "0"); }
TEST(ModeTest, Mintest) { EXPECT_EQ(All(0), 0); }
TEST(ModeTest, OutRange) {
  EXPECT_EQ(All(354), 0); // 354 -number of words
}

#include "../src/functions.h"
#include <cstring>
#include <gtest/gtest.h>

using namespace std;

TEST(WordsTest, MinTest)
{
    EXPECT_EQ(Words(3), "0");
}
TEST(WordsTest, FromZero)
{
    EXPECT_EQ(Words(0), "0");
}
TEST(Save, Success)
{
    EXPECT_EQ(Save(1, "Name"), "SaveSuccess");
    EXPECT_EQ(Save(1, "Name"), "SaveSuccess");
}
TEST(Save, Error)
{
    EXPECT_EQ(Save(0, "Name"), "0");
}
TEST(ModeTest, Mintest)
{
    EXPECT_EQ(Mode1(0), 0);
}
TEST(ModeTest, OutRange)
{
    EXPECT_EQ(Mode1(354), 0); //354 -number of words
}

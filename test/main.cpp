#include "../src/functions.h"
#include <cstring>
#include <gtest/gtest.h>

using namespace std;

TEST(StringTest, commentTest)
{
    // Given
    char comment_string[] = " //";
    char comment_string_1[] = " ///";
    // When
    string str1 = comment_string;
    string str2 = comment_string_1;
    string str1origin = " //";
    string str2origin = " ///";
    // Then
    EXPECT_EQ(str1, str1origin);
    EXPECT_EQ(str2, str2origin);
}
TEST(StringTest, CommentStarTest)
{
    // Given
    char comment_string[] = " */";
    char comment_string_1[] = " /*";
    char comment_string_2[] = " /* */";
    // When
    string str1 = comment_string;
    string str2 = comment_string_1;
    string str3 = comment_string_2;
    string str1origin = " */";
    string str2origin = " /*";
    string str3origin = " /* */";
    // Then
    EXPECT_EQ(str1, str1origin);
    EXPECT_EQ(str2, str2origin);
    EXPECT_EQ(str3, str3origin);
}
TEST(WordsTest, MinTest)
{
    EXPECT_EQ(Words(3), "0");
}
TEST(WordsTest, MaxTest)
{
    EXPECT_EQ(Words(353), "Written");
}
TEST(WordsTest, OutRange)
{
    EXPECT_EQ(Words(354), "0");
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
TEST(Save, MemoryFull)
{
    EXPECT_EQ(Save(3, "Name"), "SaveNotComplete");
}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

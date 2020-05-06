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

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

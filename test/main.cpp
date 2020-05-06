#include <gtest/gtest.h>
#include <cstring>

using namespace std;

TEST(StringTest, SpaceTest)
{
    // Given
    char comment_string[] = "Abc";
    char comment_string_1[] = "123";
    // When
    string str1 = comment_string;
    string str2 = comment_string_1;
    string str1origin = "Abc";
    string str2origin = "123";
    // Then
    EXPECT_EQ(str1, str1origin);
    EXPECT_EQ(str2, str2origin);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

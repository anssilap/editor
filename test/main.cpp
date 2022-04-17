#include "gtest/gtest.h"
#include "../color.h"

TEST(ColorTests, ColorInt255to1)
{
    color c = color_from_ints(255, 128, 0, 255);
    EXPECT_EQ(1.0f, c.r);
    EXPECT_EQ(0.0f, c.b);
}

TEST(ColorTests, ColorInt255to1)
{
    color c = color_from_hex_string("ffffff");
    EXPECT_EQ(1.0f, c.r);
    EXPECT_EQ(0.0f, c.b);
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

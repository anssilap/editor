#include "gtest/gtest.h"
#include "../color.h"

TEST(ColorTests, ColorStartsMagenta)
{
    color c;
    EXPECT_EQ(1.0f, c.r);
    EXPECT_EQ(0.0f, c.g);
    EXPECT_EQ(1.0f, c.b);
    EXPECT_EQ(0.0f, c.a);
}

TEST(ColorTests, ColorInt255to1)
{
    color c = color_from_ints(255, 128, 0, 255);
    EXPECT_EQ(1.0f, c.r);
    EXPECT_EQ(0.5f, c.g);
    EXPECT_EQ(0.0f, c.b);
    EXPECT_EQ(1.0f, c.a);
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

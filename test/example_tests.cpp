#include "../example.hpp"
#include <gtest/gtest.h>


TEST(ExampleTests, MUL) {
    EXPECT_EQ(
        multiply(3,9),
        27
    );
}
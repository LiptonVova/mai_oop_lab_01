#include <gtest/gtest.h>
#include "../include/function.h"

TEST(test_01, basic_test_set) {
    ASSERT_TRUE(answer(3, 2)==3);
}

TEST(test_02, basic_test_set) {
    ASSERT_TRUE(answer(1, 1)==0);
}

TEST(test_03, basic_test_set) {
    ASSERT_TRUE(answer(2, 1)==1);
}

TEST(test_04, basic_test_set) {
    ASSERT_TRUE(answer(10, 10)==18);
}

TEST(test_05, basic_test_set) {
    ASSERT_TRUE(answer(1, 5)==4);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
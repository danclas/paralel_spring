// Copyright 2022 Vershinin Daniil
#include <gtest/gtest.h>
#include <vector>
#include "./linear_filter_horizontal.h"
#include <iostream>

TEST(TestForFunctions, TestGetGaussKernel) {
    std::vector<float> res = getGaussKernel(1, 1.5);

    ASSERT_NEAR(res[4], 0.147761, 0.001);
}

TEST(Sequential, Test_Sum_20) {
    const int count = 20;
    int sum = 0;
    for (size_t i = 0; i < count; i++) {
        sum++;
    }
    ASSERT_EQ(count, sum);
}

TEST(Sequential, Test_Sum_50) {
    const int count = 20;
    int sum = 0;
    for (size_t i = 0; i < count; i++) {
        sum++;
    }
    ASSERT_EQ(count, sum);
}

TEST(Sequential, Test_Sum_70) {
    const int count = 20;
    int sum = 0;
    for (size_t i = 0; i < count; i++) {
        sum++;
    }
    ASSERT_EQ(count, sum);
}

TEST(Sequential, Test_Sum_100) {
    const int count = 100;
    int sum = 0;
    for (size_t i = 0; i < count; i++) {
        sum++;
    }
    ASSERT_EQ(count, sum);
}

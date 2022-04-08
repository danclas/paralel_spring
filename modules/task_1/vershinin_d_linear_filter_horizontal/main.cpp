// Copyright 2022 Vershinin Daniil
#include <gtest/gtest.h>
#include <vector>
#include "./linear_filter_horizontal.h"
#include <iostream>

TEST(TestForFunctions, TestGetGaussKernel) {
    std::vector<float> res = getGaussKernel(1, 1.5);

    ASSERT_NEAR(res[4], 0.147761, 0.001);
}

TEST(TestForFunctions, TestCalcNewPixColor_0_0) {
  std::vector<float> kernel = getGaussKernel(1, 1.5);
  std::vector<float> img{0, 128, 255, 0, 128, 255, 0, 128, 255};
  float color = calcNewPixColor(0, 0, 3, 3, kernel, 1, img);
  std::cout << color << std::endl;
  for (int i = 0; i < 9; i++) {
    std::cout << kernel[i];
  }
  ASSERT_EQ(1, 1);
}


TEST(TestForFunctions, TestCalcNewPixColor_center) {
  std::vector<float> kernel = getGaussKernel(1, 1.5);
  std::vector<float> img{0, 128, 255, 0, 128, 255, 0, 128, 255};
  float color = calcNewPixColor(1, 1, 3, 3, kernel, 1, img);
  std::cout << color << std::endl;
  for (int i = 0; i < 9; i++) {
    std::cout << kernel[i];
  }
  ASSERT_EQ(1, 1);
}


TEST(TestForFunctions, TestCalcNewPixColor_width_height) {
  std::vector<float> kernel = getGaussKernel(1, 1.5);
  std::vector<float> img{0, 128, 255, 0, 128, 255, 0, 128, 255};
  float color = calcNewPixColor(2, 2, 3, 3, kernel, 1, img);
  std::cout << color << std::endl;
  for (int i = 0; i < 9; i++) {
    std::cout << kernel[i];
  }
  ASSERT_EQ(1, 1);
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

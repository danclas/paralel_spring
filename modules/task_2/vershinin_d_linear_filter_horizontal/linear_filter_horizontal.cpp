// Copyright 2022 Vershinin Daniil
#include "../../../modules/task_2/vershinin_d_linear_filter_horizontal/linear_filter_horizontal.h"
#include <omp.h>
#include <cmath>
#include <random>

std::vector<float> getRandomImage(int width, int height) {
  std::random_device dev;
  std::mt19937 gen(dev());
  std::uniform_real_distribution<float> urd(0, 255);
  std::vector<float> vec(width * height);
  for (int i = 0; i < width * height; i++) {
    vec[i] = urd(gen);
  }
  return vec;
}

std::vector<float> getParallelOperations(const int width, const int height,
                                         const std::vector<float>& kernel,
                                         const std::vector<float>& img,
                                         int num_th) {
  std::vector<float> res(width * height);
  int m, x, y = 0;
  float color = 0;
  #pragma omp parallel private(y, x, m, color) num_threads(num_th)
  {
  #pragma omp for
    for (y = 0; y < height; y++) {
      for (x = 0; x < width; x++) {
        m = y * width + x;
        color = calcNewPixColor(x, y, width, height, kernel, 1, img);
        res[m] = color;
      }
    }
  }
  return res;
}

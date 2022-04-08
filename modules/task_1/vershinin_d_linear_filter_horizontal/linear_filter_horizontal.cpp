// Copyright 2022 Vershinin Daniil
#define _USE_MATH_DEFINES
#include "../../../modules/task_1/vershinin_d_linear_filter_horizontal/linear_filter_horizontal.h"
#include <cmath>

std::vector<float> getGaussKernel(int radius, float sigma) {
  int size = 2 * radius + 1;
  std::vector<float> res(size * size);
  float norm = 0;
  for (int x = -radius; x <= radius; x++)
    for (int y = -radius; y <= radius; y++) {
      int k = (x + radius) * size + (y + radius);
      res[k] = 1 / (2 * M_PI * sigma * sigma) *
               std::expf(-(x * x + y * y) / (2 * sigma * sigma));
      norm += res[k];
    }

  for (int i = 0; i < size * size; i++) {
    res[i] /= norm;
  }

  return res;
}


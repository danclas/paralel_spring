// Copyright 2022 Vershinin Daniil
#ifndef MODULES_TASK_2_VERSHININ_D_LINEAR_FILTER_HORIZONTAL_LINEAR_FILTER_HORIZONTAL_H_
#define MODULES_TASK_2_VERSHININ_D_LINEAR_FILTER_HORIZONTAL_LINEAR_FILTER_HORIZONTAL_H_
#include <vector>
#include "../../../modules/task_1/vershinin_d_linear_filter_horizontal/linear_filter_horizontal.h"  // seq

std::vector<float> getParallelOperations(const int width, const int height,
                                         const std::vector<float>& kernel,
                                         const std::vector<float>& img,
                                         int num_th = 4);

std::vector<float> getRandomImage(int width, int height);

#endif  // MODULES_TASK_2_VERSHININ_D_LINEAR_FILTER_HORIZONTAL_LINEAR_FILTER_HORIZONTAL_H_

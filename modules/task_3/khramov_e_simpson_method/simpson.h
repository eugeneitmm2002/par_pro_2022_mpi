// Copyright 2022 Khramov Egor
#ifndef MODULES_TASK_3_KHRAMOV_E_SIMPSON_METHOD_SIMPSON_H_
#define MODULES_TASK_3_KHRAMOV_E_SIMPSON_METHOD_SIMPSON_H_

#include <vector>
#include <functional>

using function = std::function<double(double, double, double)>;

// std::vector<int> getRandomVector(int size);

// std::vector<int> getRandomMatrix(int w, int h);

double getRectangleValue(function f, double x, double y, double z, double* h);

double getSimpsonValue(function f, double x, double y, double z, double* h);

double integrateSequential(function f, double* a, double* b, double* n);

#endif  // MODULES_TASK_3_KHRAMOV_E_SIMPSON_METHOD_SIMPSON_H_

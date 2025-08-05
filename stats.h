#pragma once

#ifdef __cplusplus
extern "C" {
#endif

struct Stats {
};

struct Stats compute_statistics(const float * numbers, int count);

struct{
  float min;
  float max;
  float avg;
}Stats

#ifdef __cplusplus
}
#endif

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

struct Stats {
};

struct Stats compute_statistics(const * numbers, int count);

struct{
  float min,
  float max;
  float avg;
}

#ifdef __cplusplus
}
#endif

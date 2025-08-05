#include "stats.h"
#include <stddef.h>
#include <float.h>

struct{
  float min,
  float max;
  float avg;
}

struct Stats compute_statistics(const * numbers, int count)
{
  struct stats stats;
  stats.min = FLT_MAX;
  stats.max = -FLT_MAX;
  stats.avg = 0.0f;
  int i;

  for(i=0; i<= count ;i++)
  {
    if(numbers[i] < stats.min)
    {
      stats.min = numbers[i];
    }

    if(numbers[i] > stats.max)
    {
      stats.max = numbers[i];
    }
    
    stats.avg = stats.avg + numbers[i];
      
  }
  stats.avg  = stats.avg /count;

  return stats;
}



#include <stats.h>
#include <stddef.h>
#include <float.h>

struct Stats compute_statistics(const * numbers, int count)
{
  struct Stats Stats;
  Stats .min = FLT_MAX;
  Stats .max = -FLT_MAX;
  Stats .average = 0.0f;
  int i;

  for(i=0; i<= count ;i++)
  {
    if(numbers[i] < stats.min)
    {
      Stats.min = numbers[i];
    }

    if(numbers[i] > stats.max)
    {
      Stats.max = numbers[i];
    }
    
    Stats.average = Stats.average + numbers[i];
      
  }
  Stats.average  = Stats.average /count;

  return Stats;
}



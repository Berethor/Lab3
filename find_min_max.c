#include "find_min_max.h"
#include <string.h>
#include <limits.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  struct MinMax min_max;
  min_max.min = array[0];
  min_max.max = array[0];
  
   for (int  c = begin ; c < end ; c++ ) 
    {
        if ( array[c] < min_max.min ) 
        {
           min_max.min = array[c];
        }
        if ( array[c] > min_max.max ) 
        {
           min_max.max = array[c];
        }
    }
  return min_max;
}

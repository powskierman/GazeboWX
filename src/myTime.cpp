#include <Arduino.h>
#include "myTime.h"

/**                          Convert unix time to a time string
***************************************************************************************/
   String strTime(time_t unixTime)
{
  unixTime += TIME_OFFSET;
  return ctime(&unixTime);
}
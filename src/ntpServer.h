#ifndef NTPSERVER_H
#define NTPSERVER_H
    #include "settings.h"
    extern void ntpService();
    extern void getTime();
       // NTP Servers and time zone:
    static const char ntpServerName[] = "us.pool.ntp.org";
    const int timeZone = -4;  // Eastern Daylight Time (USA)
    extern long currentTime;
#endif 
#include "GetAlert.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void emailAlerter(void)
{
    emailAlertCallCount++;
}

void ledAlerter(void)
{
    ledAlertCallCount++;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if(computedStats.max > maxThreshold)
    {
        alerters[0]();
        alerters[1]();
    }
}

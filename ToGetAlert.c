#include "ToGetAlert.h"

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

void check_and_alert(float myMaxThreshold, int myAlerters, Struct Stats myComputedStats)
{
    if(myMaxThreshold > myComputedStats.max)
    {
        myAlerters[0]();
        myAlerters[1]();
    }
}

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

void check_and_alert(float myMaxThreshold, alerter_funcptr myAlerters, Struct Stats myComputedStats)
{
    if(myMaxThreshold > myComputedStats.max)
    {
        myAlerters[0]();
        myAlerters[1]();
    }
}

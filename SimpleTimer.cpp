#include "SimpleTimer.h"

void SimpleTimer::init()
{
	//start time
	bootTime = millis();
	time = bootTime;
}

//This should be called every tick
void SimpleTimer::update()
{
  lastTime = time;
  time = millis();
  elapsedTick = time - lastTime;
}

unsigned long SimpleTimer::getTime()
{
	return time;
}
unsigned long SimpleTimer::getBootTime()
{
	return bootTime;
}
unsigned long SimpleTimer::getElapsedTick()
{
	return elapsedTick;
}

SimpleTimer simpleTimer;

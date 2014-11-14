#include "Timer.h"

void Timer::init()
{
	//start time
	bootTime = millis();
	time = bootTime;
}

//This should be called every tick
void Timer::update()
{
  lastTime = time;
  time = millis();
  elapsedTick = time - lastTime;
}

unsigned long Timer::getTime()
{
	return time;
}
unsigned long Timer::getBootTime()
{
	return bootTime;
}
unsigned long Timer::getElapsedTick()
{
	return elapsedTick;
}

Timer timer;

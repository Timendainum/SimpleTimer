#ifndef __TIMER_H__
#define __TIMER_H__

#include <Arduino.h>

class Timer
{
  private:
  	unsigned long time, lastTime, bootTime, elapsedTick;

  public:
  	void init();
  	void update();
  	unsigned long getTime();
  	unsigned long getBootTime();
  	unsigned long getElapsedTick();
};

extern Timer timer;

#endif
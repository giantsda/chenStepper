/*
 * chenStepper.h
 *
 *  Created on: Apr 6, 2019
 *      Author: chen
 */

/* Copyright 2019 Chen Shen
% This program is free software; you can redistribute it and/or
% modify it under the terms of the GNU General Public License
% version 2 as published by the Free Software Foundation.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
% GNU General Public License for more details. */
 
#ifndef CHENSTEPPER_H_
#define CHENSTEPPER_H_

#include "Arduino.h"

class chenStepper
{
public:
  chenStepper ();
  chenStepper (uint8_t pul, uint8_t dir, uint8_t ena);
  void
  move (int speed);
  void
  moveI (int speed, int steps);
  void
  setStepsPerRevelotion (int stepsPerRevelotion);
  void
  setStepsToGo (int setStepsToGo);
  void
  Accelerate (int*delay, int steps);
  void
  Deaccelerate (int*delay, int steps);
  int
  findAccelerationSteps (int speedFrom, int speedTo);
  void
  getDelayArray (int speedFrom, int speedTo, int steps, int* delay);

  long
  getCurrentPosition ();

private:
  uint8_t _pul, _dir, _ena;
  long _stepsToGo;
  int _stepsPerRevelotion;
  float _speed;         // Steps per second
  long _currentPos;  // steps
};

#endif /* CHENSTEPPER_H_ */


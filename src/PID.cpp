#include "PID.h"

/**
 * 
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * Initialize PID coefficients (and errors, if needed)
   */
   Kp=Kp_;
   Ki=Ki_;
   Kd=Kd_;
   
   d_error=0;
   i_error=0;
   p_error=0;

}

void PID::UpdateError(double cte) {
  /**
   * Update PID errors based on cte.
   */
   
   d_error = cte - p_error;
   p_error = cte;
   i_error+=cte;

}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  return (-1 * Kp * p_error - Kd * d_error - Ki * i_error);  // TODO: Add your total error calc here!
}

double PID::CalculateSteerValue() {
	
	return (-1 * Kp * p_error - Kd * d_error - Ki * i_error);
	
}
#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
}

void PID::UpdateError(double cte) {
  cte_diff = cte - cte_last;
  cte_last = cte;
  cte_sum += cte;
}

double PID::TotalError() {
  return -Kp * cte_last - Kd * cte_diff - Ki * cte_sum;
}
